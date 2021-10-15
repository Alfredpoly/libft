#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	hi;

	i = 0;
	hi = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack || hi == 0)
	{
		while (haystack[i] == needle[i])
		{
			i++;
			if (needle[i] == '\0')
			{
				if ((i + hi) > len)
					return (NULL);
				return ((char *)haystack);
			}
		}
		hi++;
		haystack++;
	}
	return (NULL);
}

// int main() {
// //    const char haystack[] = ;
//    const char needle[] = "AAAAAAAAAAAAA";
// //    char *ret;
//    char *ft_ret;

// //    ret = strnstr(((void *)0), needle, 13);
//    ft_ret = ft_strnstr(((void *)0), needle, 13);

// //    printf("The substring is: %s\n", ret);
//    printf("The ft_substring is: %s\n", ft_ret);
//    return(0);
// }