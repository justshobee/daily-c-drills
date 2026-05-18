/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/18 17:52:47 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/18 18:07:23 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	join_with_separator(char **strs, int size)
{
	int		i;

	i = 2;
	while (i < size)
	{
		ft_putstr(strs[i]);
		if (!(i == size - 1))
			ft_putstr(strs[1]);
		i++;
	}
}

int		main(int size, char **str)
{
	if (size > 2)
		join_with_separator(str, size);
	ft_putchar('\n');
	return (0);
}
