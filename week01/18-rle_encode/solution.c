/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/19 18:38:44 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/19 19:04:33 by shobeedev            tfaaty fi l3oolaa   */
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

void	rle(char *str)
{
	int		i;
	int		len;
	char	c;

	i = 0;
	len = 0;
	c = str[i];
	if (str[i] == '\0')
		return ;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			ft_putchar(c);
			ft_putnbr(len);
			len = 0;
			c = str[i];
		}
		len++;
		i++;
	}
	ft_putchar(c);
	ft_putnbr(len);
}

int		main(int size, char **str)
{
	if (size == 2)
		rle(str[1]);
	ft_putchar('\n');
	return (0);
}
