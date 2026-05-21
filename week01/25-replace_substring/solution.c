/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/21 10:16:18 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/21 10:33:45 by shobeedev            tfaaty fi l3oolaa   */
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

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ismatch(char *str, char *search)
{
	int		i;

	i = 0;
	while (search[i] != '\0')
	{
		if (search[i] != str[i])
			return (0);
		i++;
	}
	return (1);
}

void	replace_word(char *str, char *replace)
{
	int		i;

	i = 0;
	while (replace[i] != '\0')
	{
		str[i] = replace[i];
		i++;
	}
}

void	replace_substring(char *str, char *search, char *replace)
{
	int		i;

	i = 0;
	if (ft_strlen(search) != ft_strlen(replace))
		return ;
	while (str[i] != '\0')
	{
		if (str[i] == *search)
		{
			if (ismatch(str + i, search))
				replace_word(str + i, replace);
		}
		i++;
	}
	ft_putstr(str);
}

int		main(int size, char **str)
{
	if (size == 4)
		replace_substring(str[1], str[2], str[3]);
	ft_putchar('\n');
	return (0);
}
