#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	char		*s;
	size_t		n;
	size_t		dlen;
	size_t		slen;

	d = (char *)dst;
	s = (char *)src;
	n = size;
	slen = ft_strlen(src);
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = size - dlen;
	if (n == 0)
		return (dlen + slen);
	while (*s != '\0')
	{
		if (n-- != 1)
			*d++ = *s;
		s++;
	}
	*d = '\0';
	return (dlen + slen);
}

// int main() {

// 	printf("%zu", strlcat("there is no stars in the sky", "the cake is a lie !\0I'm hidden lol\r\n", strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4));
// 	// puts(dest); 
// 	// printf("%lu\n", strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4);
// 	// printf("%zu", ft_strlcat("there is no stars", "the cake is a lie !\0I'm hidden lol\r\n", 23));
// 	printf("%zu",ft_strlcat("there is no stars in the sky", "the cake is a lie !\0I'm hidden lol\r\n", strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4));
// 	// ft_strlcat("there is no stars in the sky", "the cake is a lie !\0I'm hidden lol\r\n", 23);
// 	//puts(dest2); 

// 	return 0;
// }