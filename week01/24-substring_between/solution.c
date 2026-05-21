/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/21 10:03:44 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/21 10:13:35 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_until(char *str, char *ar2)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == *ar2)
			break ;
		ft_putchar(str[i]);
		i++;
	}
}

void	substring_between(char *str, char *ar1, char *ar2)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == *ar1)
		{
			print_until(str + i + 1, ar2);
			break ;
		}
		i++;
	}
}

int		main(int size, char **str)
{
	if (size == 4)
		substring_between(str[1], str[2], str[3]);
	ft_putchar('\n');
	return (0);
}
