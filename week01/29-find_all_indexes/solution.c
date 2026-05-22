/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/22 09:10:30 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/22 10:41:31 by shobeedev            tfaaty fi l3oolaa   */
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
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	while (div <= (n / 10))
		div *= 10;
	while (div > 0)
	{
		ft_putchar((n / div) + '0');
		n = n % div;
		div = div / 10;
	}
}

int		ismatch(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s2[i] != '\0')
	{
		if (s2[i] != s1[i])
			return (0);
		i++;
	}
	return (1);
}

void	find_all_indexes(char *first, char *second)
{
	int		i;
	int		space;

	i = 0;
	space = -1;
	while (first[i] != '\0')
	{
		if (first[i] == *second || *second == '\0')
		{
			if (ismatch(first + i, second) || *second == '\0')
			{
				if (space == 1)
					ft_putchar(' ');
				ft_putnbr(i);
				space = 1;
			}
		}
		i++;
	}
}

int		main(int size, char **str)
{
	if (size == 3)
		find_all_indexes(str[1], str[2]);
	ft_putchar('\n');
}
