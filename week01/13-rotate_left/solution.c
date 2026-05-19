/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/19 09:47:18 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/19 10:29:44 by shobeedev            tfaaty fi l3oolaa   */
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
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*rot_left_one(char *str)
{
	int		i;
	char	element;

	i = 0;
	element = str[i];
	while (str[i + 1] != '\0')
	{
		str[i] = str[i + 1];
		i++;
	}
	str[i] = element;
	return (str);
}

char	*rot_left_n(char *str, int n)
{
	int		i;

	if (n == 0)
		return (str);
	i = 0;
	while (i < n)
	{
		rot_left_one(str);
		i++;
	}
	return (str);
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

int		main(int size, char **str)
{
	if (size == 3)
	{
		rot_left_n(str[1], ft_atoi(str[2]));
		ft_putstr(str[1]);
	}
	else if (size == 2)
	{
		rot_left_n(str[1], 1);
		ft_putstr(str[1]);
	}
	ft_putchar('\n');
	return (0);
}
