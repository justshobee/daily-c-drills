/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/23 10:24:07 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/23 10:41:35 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int		is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int		is_pangram(char *str)
{
	int		freq[26] = {0};
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]))
			freq[(int)to_lower(str[i]) - 'a']++;
		i++;
	}
	i = 0;
	while (i < 26)
	{
		if (freq[i] == 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(int size, char **str)
{
	if (size == 2)
		ft_putchar(is_pangram(str[1]) + '0');
	ft_putchar('\n');
	return (0);
}
