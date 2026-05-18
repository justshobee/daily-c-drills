/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/18 10:00:04 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/18 10:14:25 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	long	n;
	long	div;

	n = nbr;
	div = 1;
	if (n == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	while (div <= (n / 10))
		div = div * 10;
	while (div > 0)
	{
		ft_putchar((n / div) + '0');
		n = n % div;
		div = div / 10;
	}
}

int		ismatch(char *str, char *pattern)
{
	int		i;

	i = 0;
	while (pattern[i])
	{
		if (pattern[i] != str[i])
			return (0);
		i++;
	}
	return (1);
}

int		find_substring(char *text, char *pattern)
{
	int		i;

	i = 0;
	while (text[i])
	{
		if (ismatch(text + i, pattern) == 1)
			return (i);
		i++;
	}
	return (-1);
}

int		main(int size, char **str)
{
	if (size == 3)
	{
		ft_putnbr(find_substring(str[1], str[2]));
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('0');
		ft_putchar('\n');
	}
	return (0);
}
