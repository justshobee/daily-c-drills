/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/19 18:02:38 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/19 18:10:44 by shobeedev            tfaaty fi l3oolaa   */
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

int		is_dup(char *str, char c, int index)
{
	int		i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*remove_dup(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || !is_dup(str, str[i], i))
			str[j++] = str[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}

int		main(int size, char **str)
{
	if (size == 2)
	{
		remove_dup(str[1]);
		ft_putstr(str[1]);
	}
	ft_putchar('\n');
	return (0);
}
