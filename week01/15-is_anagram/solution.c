/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/19 11:19:25 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/19 11:37:39 by shobeedev            tfaaty fi l3oolaa   */
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
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int		is_anagram(char *s1, char *s2)
{
	int		i;
	int		freq[26] = {0};

	i = 0;
	while (s1[i] != '\0')
	{
		if (is_alpha(s1[i]))
			freq[to_lower(s1[i]) - 'a']++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		if (is_alpha(s2[i]))
			freq[to_lower(s2[i]) - 'a']--;
		i++;
	}
	i = 0;
	while (i < 26)
	{
		if (freq[i] != 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(int size, char **str)
{
	if (size == 3)
		ft_putchar(is_anagram(str[1], str[2]) + '0');
	ft_putchar('\n');
	return (0);
}
