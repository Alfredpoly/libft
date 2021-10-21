#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc((len + 1) * sizeof(char));
	if (!s || !ptr)
		return (NULL);
	while (start < ft_strlen(s) && len != 0)
	{
		ptr[i] = s[start];
		start++;
		len--;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
