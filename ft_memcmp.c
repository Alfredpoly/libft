#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n-- != 0)
	{
		if (*(unsigned char *)s1++ != *(unsigned char *)s2++)
			return ((*(unsigned char *)--s1) - (*(unsigned char *)--s2));
	}
	return (0);
}
