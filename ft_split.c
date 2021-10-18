#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	countchar(const char *s, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			nb++;
		i++;
	}
	return (nb);
}

int	*create_pattern(const char *s, char c)
{
	int		i;
	int		j;
	int		nbwords;
	int		nbletters;
	int		*pattern;

	i = 0;
	j = 0;
	nbwords = 1;
	nbletters = 0;
	pattern = malloc((countchar(s, c) + 1) * sizeof(int));
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			nbwords++;
			while (s[i] == c)
				i++;
		}
		nbletters++;
		pattern[j] = nbwords;
		i++;
		j++;
	}
	pattern[j] = 0;
	return (pattern);
}

int	wordlen(int *pattern, int wordpos)
{
	int	i;
	int	wordlen;

	i = 0;
	wordlen = 0;
	while (pattern[i] != wordpos)
		i++;
	while (pattern[i] == wordpos)
	{
		wordlen++;
		i++;
	}
	return (wordlen);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		k;
	int		l;
	int		*pattern;

	i = 0;
	j = 0;
	k = 0;
	s = ft_strtrim(s, &c);
	pattern = create_pattern(s, c);
	while (pattern[i] != 0)
		i++;
	arr = ft_calloc(pattern[i - 1], sizeof(char *));
	if (!arr)
		return NULL;
	i = 0;
	while (s[i] != '\0')
	{
		arr[k] = ft_calloc(wordlen(pattern, (k + 1)) + 1, sizeof(char));
		if (s[i] == c)
			i++;
		else
		{
			l = 0;
			while (pattern[j] == k + 1)
			{
				arr[k][l] = s[i];
				l++;
				j++;
				i++;
			}
			k++;
		}
	}
	return (arr);
}



// int main()
// {
// 	char	**arr = ft_split("        ", ' ');
// 	int i;

// 	// printf("%s", arr[0]);
// 	i = 0;
// 	while (i != 5)
// 	{
// 		printf("%s ", arr[i]);
// 		i++;
// 	}
// }