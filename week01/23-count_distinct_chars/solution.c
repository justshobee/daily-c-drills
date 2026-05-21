/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/21 09:49:13 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/21 09:59:13 by shobeedev            tfaaty fi l3oolaa   */
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
		n = -n;
		ft_putchar('-');
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

int		is_dup(char c, char *str, int index)
{
	int		i;

	i = 0;
	while (i < index)
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int		count_distinct_chars(char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || !is_dup(str[i], str, i))
			count++;
		i++;
	}
	return (count);
}

int		main(int size, char **str)
{
	if (size == 2)
		ft_putnbr(count_distinct_chars(str[1]));
	ft_putchar('\n');
	return (0);
}

