/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/20 09:49:25 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/20 10:18:43 by shobeedev            tfaaty fi l3oolaa   */
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
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = (res * 10) + (str[i] - '0');
		else
			break ;
		i++;
	}
	return (res * sign);
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

void	inc_freq(int freq[], char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || !is_dup(str[i], str, i))
			freq[(int)str[i]]++;
		i++;
	}
}

void	print_lcp(int n, int freq[])
{
	int		i;

	i = 0;
	while (i < 255)
	{
		if (freq[i] == n)
			ft_putchar(i);
		i++;
	}
}

void	longest_common_prefix(int size, char **strs)
{
	int		freq[255] = {0};
	int		n;
	int		i;

	n = ft_atoi(strs[1]);
	i = 2;
	if (n == 1)
	{
		ft_putstr(strs[i]);
		return ;
	}
	while (i < size)
	{
		inc_freq(freq, strs[i]);
		i++;
	}
	print_lcp(n, freq);
}

int		main(int size, char **str)
{
	if (size > 2)
		longest_common_prefix(size, str);
	ft_putchar('\n');
	return (0);
}
