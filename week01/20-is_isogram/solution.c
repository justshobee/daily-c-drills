/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/20 09:05:39 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/20 09:21:12 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int		is_dup(char c, char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (to_lower(c) == to_lower(str[i]))
			return (1);
		i++;
	}
	return (0);
}

int		is_isogram(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_dup(str[i], str + i + 1))
			return (0);
		i++;
	}
	return (1);
}

int		main(int size, char **str)
{
	if (size == 2)
		ft_putchar(is_isogram(str[1]) + '0');
	ft_putchar('\n');
	return (0);
}
