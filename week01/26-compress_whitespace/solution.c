/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/21 10:56:22 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/21 11:15:44 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_isspace(char c)
{
	return (c == ' ' || c == '\t');
}
void	compress_whitespace(char *str)
{
	int		i;
	int		space;

	i = 0;
	space = -1;
	while (str[i] != '\0')
	{
		if (!ft_isspace(str[i]))
		{
			if (space == 0)
				ft_putchar(' ');
			space = 1;
			ft_putchar(str[i]);
		}
		else if (ft_isspace(str[i]) && space == 1)
			space = 0;
		i++;
	}
}

int		main(int size, char **str)
{
	if (size == 2)
		compress_whitespace(str[1]);
	ft_putchar('\n');
	return (0);
}

