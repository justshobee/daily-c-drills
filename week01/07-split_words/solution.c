/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/18 11:16:55 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/18 13:17:23 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

bool	ispace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

void	print_word(char *str, int *index)
{
	int		i;

	i = 0;
	while (str[i] && !ispace(str[i]))
	{
		ft_putchar(str[i]);
		i++;
	}
	*index += i;
	ft_putchar('\n');
}

void	split_words(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ispace(str[i]))
		{
			print_word(str + i, &i);
			continue ;
		}
		i++;
	}
}

int		main(int size, char **str)
{
	if (size == 2)
		split_words(str[1]);
	return (0);
}
