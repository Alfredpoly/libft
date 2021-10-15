#include <stdio.h>
#include <string.h>

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

// int main() {
// 	printf("%d\n", memcmp("\200", "\0", 2));
// 	printf("%d", ft_memcmp("\200", "\0", 2));
// }