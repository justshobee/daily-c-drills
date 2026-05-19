/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/19 12:12:48 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/19 12:22:10 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1 ,&c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int		is_vowel(char c)
{
	return (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o');
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

char	*remove_vowels(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (!is_vowel(to_lower(str[i])))
		{
			str[j++] = str[i];
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

int		main(int size, char **str)
{
	if (size == 2)
		ft_putstr(remove_vowels(str[1]));
	ft_putchar('\n');
	return (0);
}


