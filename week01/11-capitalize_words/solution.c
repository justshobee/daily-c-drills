/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/18 19:02:16 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/18 19:14:22 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

bool	ispace(char c)
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

char	*capitalize_words(char *str)
{
	int		i;
	int		istart;

	i = 0;
	istart = 0;
	while (str[i] != '\0')
	{
		if (!ispace(str[i]) && istart == 0)
		{
			istart = 1;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (ispace(str[i]) && istart == 1)
			istart = 0;
		i++;
	}
	return (str);
}

int		main(int size, char **str)
{
	if (size == 2)
	{
		capitalize_words(str[1]);
		ft_putstr(str[1]);
	}
	ft_putchar('\n');
	return (0);
}
