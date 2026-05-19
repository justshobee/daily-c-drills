/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/19 19:07:23 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/19 19:52:35 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int		is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
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
	while (str[i] != '\0')
	{
		if (is_digit(str[i]))
			res = (res * 10) + (str[i] - '0');
		else
			break ;
		i++;
	}
	return (res * sign);
}

void	print_char(char c, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		ft_putchar(c);
		i++;
	}
}

int		len_nbr(int n)
{
	int		i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	rle_decode(char *str)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	if (str[i] == '\0')
		return ;
	while (str[i] != '\0')
	{
		n = ft_atoi(str + i + 1);
		print_char(str[i++], n);
		i += len_nbr(n);
	}
}

void	rle_decode_m2(char *str)
{
	int		i;
	int		n;
	char	c;

	i = 0;
	if (str[i] == '\0')
		return ;
	while (str[i] != '\0')
	{
		c = str[i++];
		n = 0;
		while (is_digit(str[i]))
		{
			n = (n * 10) + (str[i] - '0');
			i++;
		}
		print_char(c, n);
	}
}
int		main(int size, char **str)
{
	if (size == 2)
		rle_decode_m2(str[1]);
	ft_putchar('\n');
}
