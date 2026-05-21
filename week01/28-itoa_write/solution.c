/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/21 18:22:52 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/21 20:27:29 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1 ,&c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int		ft_atoi(char *str)
{
	int		res;
	int		sign;
	int		i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	if (str[i] == '-')
	{
		sign = -sign;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = res * 10 + (str[i] - '0');
		else
			break ;
		i++;
	}
	return (res * sign);
}

char	*ft_itoa(int nbr, char *str)
{
	long	n;
	long	div;
	int		i;

	n = nbr;
	div = 1;
	i = 0;
	if (n == 0)
	{
		str[i] = '0';
		i++;
	}
	if (n < 0)
	{
		n = -n;
		str[i] = '-';
		i++;
	}
	while (div <= (n / 10))
		div = div * 10;
	while (div > 0)
	{
		str[i] = (n / div) + '0';
		n = n % div;
		div = div / 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

int		main(int size, char **strs)
{
	char	str[10];
	if (size == 2)
		ft_putstr(ft_itoa(ft_atoi(strs[1]), str));
	ft_putchar('\n');
	return (0);
}
