#include <stdio.h>
#include <string.h>

char	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	ch;

	s = (unsigned char *)str;
	ch = c;
	while ((s && n > 0) || (s == NULL))
	{
		if (*s == ch)
		{
			return ((void *)s);
		}
		s++;
		n--;
	}
	return (NULL);
}

// int main () {
// 	// char str[] = "/|\x12\xff\x09\x42\042\42|\\";
// 	char ch = '\x42';
// 	// char *ret;
// 	char *ft_ret;

// 	// ret = memchr("test.after", '.', 2);
//    	ft_ret = ft_memchr(((void *)0), '.', 2);

// 	// printf("String after |%c| is - |%s|\n", ch, ret);
// 	printf("String ft_after |%c| is - |%s|\n", ch, ft_ret);

// 	return(0);
// }