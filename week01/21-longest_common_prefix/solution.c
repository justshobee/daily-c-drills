/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/20 11:33:58 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/20 12:19:53 by shobeedev            tfaaty fi l3oolaa   */
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

void	compare_str(char *str, char *check)
{
	int		i;

	i = 0;
	while (check[i] != '\0')
	{
		if (check[i] != str[i])
		{
			check[i] = '\0';
			break ;
		}
		i++;
	}
}

void	longest_common_prefix(int size, char **str)
{
	int		i;
	int		n;

	i = 3;
	n = ft_atoi(str[1]);
	if (n == 1)
	{
		ft_putstr(str[2]);
		return ;
	}
	while (i < size)
	{
		compare_str(str[i], str[2]);
		i++;
	}
	ft_putstr(str[2]);
}
int		main(int size, char **str)
{
	if (size > 2)
		longest_common_prefix(size, str);
	ft_putchar('\n');
}
