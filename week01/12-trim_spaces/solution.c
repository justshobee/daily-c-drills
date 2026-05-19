/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/19 09:16:11 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/19 09:42:15 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

bool	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
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

char	*trim_spaces(char *str)
{
	int		i;
	int		j;
	int		inword;

	i = 0;
	j = 0;
	inword = -1;
	while (str[i] != '\0')
	{
		if (!ft_isspace(str[i]))
		{
			if (inword == 0)
				str[j++] = ' ';
			inword = 1;
			str[j++] = str[i];
		}
		else if (ft_isspace(str[i]) && inword == 1)
			inword = 0;
		i++;
	}
	str[j] = '\0';
	return (str);
}

int		main(int size, char **str)
{
	if (size == 2)
		ft_putstr(trim_spaces(str[1]));
	ft_putchar('\n');
	return (0);
}
