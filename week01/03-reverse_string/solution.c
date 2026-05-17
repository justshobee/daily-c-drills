/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/17 19:08:18 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/17 19:14:19 by shobeedev            tfaaty fi l3oolaa   */
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
	ft_putchar('\n');
}

void	ft_swap(char *a, char *b)
{
	char	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*rev_string(char *str)
{
	char	*start;
	char	*end;

	start = str;
	end = str + (ft_strlen(str) - 1);
	while (start < end)
	{
		ft_swap(start, end);
		start++;
		end--;
	}
	return (str);
}

int		main(int size, char **str)
{
	if (size == 2)
	{
		rev_string(str[1]);
		ft_putstr(str[1]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar('\n');
	}
	return (0);
}
