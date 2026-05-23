/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/23 10:52:29 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/23 11:51:06 by shobeedev            tfaaty fi l3oolaa   */
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

char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

char	*remove_snake(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '_')
		{
			str[j] = str[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

char	*camle_case(char *str)
{
	int		i;


	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '_')
		{
			if (i == 0 || str[i - 1] == '_')
				str[i] = to_upper(str[i]);
		}
		i++;
	}
	return (str);
}

char	*snake_case_to_camel(char *str)
{
	camle_case(str);
	remove_snake(str);
	return (str);
}

int		main(int size, char **str)
{
	if (size == 2)
		ft_putstr(snake_case_to_camel(str[1]));
	ft_putchar('\n');
	return (0);
}
