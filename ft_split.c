#include "libft.h"

char	**clear(char **arr)
{
	unsigned int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

int	countstr(char const *s, char c)
{
	int	i;
	int	nbstr;

	i = 0;
	nbstr = 0;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		while (s[i] == c && s[i] != '\0')
			i++;
		nbstr++;
	}
	return (nbstr);
}

int	countchar(char const *s, int i, char c)
{
	int	nbchar;

	nbchar = 0;
	while (s[i] != c && s[i] != '\0')
	{
		nbchar++;
		i++;
	}
	return (nbchar);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	s = ft_strtrim(s, &c);
	arr = ft_calloc((countstr(s, c) + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	while (s[i] != '\0')
	{
		k = 0;
		arr[j] = ft_calloc((countchar(s, i, c) + 1), sizeof(char));
		if (!arr[j])
			return (clear(arr));
		while (s[i] != c && s[i] != '\0')
			arr[j][k++] = s[i++];
		while (s[i] == c && s[i] != '\0')
			i++;
		j++;
	}
	free((void *)s);
	return (arr);
}

// int	main()
// {
// 	char *s =" split thisd dsuhds    dsd ";

// 	char **arr = ft_split(s, ' ');
// 	int i;

// 	// printf("%s", arr[0]);
// 	i = 0;
// 	while (i != 1)
// 	{
// 		printf("%s\n", arr[i]);
// 		i++;
// 	}
// 	// check_leaks();
// }
