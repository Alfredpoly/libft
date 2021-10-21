#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	int		i;

	srclen = 0;
	i = 0;
	if (dstsize > 0)
	{
		while (src[i] != '\0' && dstsize > 1)
		{
			dst[i] = src[i];
			i++;
			dstsize--;
		}
		dst[i] = '\0';
	}
	while (src[srclen] != '\0')
	{
		srclen++;
	}
	return (srclen);
}

// int main() {
// 	char dest[] = "rrr";
// 	char src[] = "testlo";
// 	char dest2[] = "rrr";
// 	char src2[] = "testlo";

// 	strlcpy(dest, src, 4);
// 	puts(dest); 
// 	ft_strlcpy(dest2, src2, 4);
// 	puts(dest2); 

// 	return 0;
// }