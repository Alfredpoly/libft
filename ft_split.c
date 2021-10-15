#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

//. number of words
//. number of letters
//. fontion pour itere dans les mots et les mettre dans array[0][mots]
//. fonction pour skip le char separant les mots

int	skip(char *s, char c, int i)
{
	while (s[i] == c)
	{
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;

	i = 0;
	s = ft_strtrim(s, &c);
	printf("%s", s);
	// while (s[i] != '\0')
	// {
	// 	if (s[i] == c)
	// 		i = skip(s, c, i);
	// }
	return NULL;
}

int main()
{
	ft_split("  need to split ", ' ');
}