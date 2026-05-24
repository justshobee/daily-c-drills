/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/23 18:17:04 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/24 09:38:32 by shobeedev            tfaaty fi l3oolaa   */
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

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

char	*lower_str(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = to_lower(str[i]);
		i++;
	}
	return (str);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*add_snake(char *str,int pos)
{
	int		i;

	i = ft_strlen(str);
	str[i + 1] = '\0';
	while (i > pos)
	{
		str[i] = str[i - 1];
		i--;
	}
	str[pos] = '_';
	return (str);
}

char	*camel_to_snake(char *str)
{
	int		i;
	int		snake;

	i = 0;
	snake = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (snake == 1)
				add_snake(str, i++);
			snake = 1;
		}
		i++;
	}
	lower_str(str);
	return (str);
}

int		main(int size, char **str)
{
	if (size == 2)
		ft_putstr(camel_to_snake(str[1]));
	ft_putchar('\n');
	return (0);
}
