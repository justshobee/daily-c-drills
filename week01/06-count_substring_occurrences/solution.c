/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/18 10:28:02 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/18 10:50:23 by shobeedev            tfaaty fi l3oolaa   */
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

int		ismatch(char *str, char *pattern, int *index)
{
	int		i;

	i = 0;
	while (pattern[i] != '\0')
	{
		if (str[i] != pattern[i])
			return (0);
		i++;
	}
	*index += i - 1;
	return (1);
}

int		count_substring_occurrences(char *first, char *second)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (first[i] != '\0')
	{
		if (ismatch(first + i, second, &i) == 1)
			count++;
		i++;
	}
	return (count);
}

int		main(int size, char **str)
{
	if (size == 3)
	{
		int		n;

		n = count_substring_occurrences(str[1], str[2]);
		ft_putnbr(n);
	}
	ft_putchar('\n');
	return (0);
}
