/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/19 10:47:35 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/19 11:15:49 by shobeedev            tfaaty fi l3oolaa   */
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

int		ft_atoi(char *str)
{
	int		res;
	int		sign;
	int		i;

	i = 0;
	res = 0;
	sign = 1;
	while  (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
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

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*rot_right_one(char *str)
{
	int		i;
	char	element;

	i = ft_strlen(str) - 1;
	element = str[i];
	while (i > 0)
	{
		str[i] = str[i - 1];
		i--;
	}
	str[i] = element;
	return (str);
}

char	*rot_right_n(char *str, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		rot_right_one(str);
		i++;
	}
	return (str);
}

int		main(int size, char **str)
{
	if (size == 3)
	{
		rot_right_n(str[1], ft_atoi(str[2]));
		ft_putstr(str[1]);
	}
	else if (size == 2)
	{
		rot_right_n(str[1], 1);
		ft_putstr(str[1]);
	}
	ft_putchar('\n');
	return (0);
}
