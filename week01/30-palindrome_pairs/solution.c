/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/22 18:26:45 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/23 12:00:59 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1 ,&c, 1);
}

void	ft_putnbr(int nbr)
{
	long	n;
	long	div;

	n = nbr;
	div = 1;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
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

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		is_palindrom(char *str)
{
	char	*start;
	char	*end;

	start = str;
	end = str + (ft_strlen(str) - 1);
	while (start < end)
	{
		if (*start != *end)
			return (0);
		start++;
		end--;
	}
	return (1);
}

int		ft_strcat(char *s1, char *s2)
{
	int		size = ft_strlen(s1) + ft_strlen(s2);
	char	str[size];
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		str[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str[j] = s2[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (is_palindrom(str));
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
		if (str[i] >= '0' && str[i] <= '9')
			res = res * 10 + (str[i] - '0');
		else
			break ;
		i++;
	}
	return (res * sign);
}

void	palindrome_pairs(int n, char **str)
{
	int		i;
	int		j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (ft_strcat(str[i], str[j]) && i != j)
			{
				ft_putnbr(i);
				ft_putchar(' ');
				ft_putnbr(j);
				ft_putchar('\n');
			}
			j++;
		}
		i++;
	}
}

int		main(int size, char **str)
{
	if (size > 3)
		palindrome_pairs(ft_atoi(str[1]), str + 2);
	return (0);
}
