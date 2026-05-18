/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/17 19:23:30 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/18 09:35:00 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

bool	is_palindrome(char *str)
{
	char	*start;
	char	*end;

	start = str;
	end = str + (ft_strlen(str) - 1);
	while (start < end)
	{
		if (*start == ' ')
			start++;
		if (*end == ' ')
			end--;
		if (to_lower(*start) != to_lower(*end))
			return (0);
		start++;
		end--;
	}
	return (1);
}

int		main(int size, char **str)
{
	if (size == 2)
	{
		if (is_palindrome(str[1]))
			ft_putchar('1');
		else
			ft_putchar('0');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('0');
		ft_putchar('\n');
	}
	return (0);
}
