#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	charset(char c, char *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		j;
	int		k;

	if (!s1)
		return (NULL);
	i = 0;
	k = 0;
	j = ft_strlen(s1);
	while (charset(s1[i], (char *)set) == 1)
		i++;
	while (charset(s1[j - 1], (char *)set) == 1)
		j--;
	if (i == ft_strlen(s1))
		i = 0;
	ptr = malloc((j - i + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i != j)
	{
		ptr[k++] = s1[i++];
	}
	ptr[k] = '\0';
	return (ptr);
}

// int main()
// {
// 	printf("%s", ft_strtrim("    \t  \n\n   \t  \n\n  ", " \t\n"));
// }