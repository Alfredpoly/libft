#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc((len + 1) * sizeof(char));
	if (!s || !ptr)
		return (NULL);
	while ((int)start < ft_strlen(s) && len != 0)
	{
		ptr[i] = s[start];
		start++;
		len--;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int	main ()
// {
// 	ft_substr("test", 10, 10);
// }