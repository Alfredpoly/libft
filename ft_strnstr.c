#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	if (!*haystack)
		return (NULL);
	while (i < len)
	{
		if (ft_strncmp((char *)&haystack[i], needle, ft_strlen(needle)) == 0)
		{
			if (i + ft_strlen(needle) > len)
				return (NULL);
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

// int main() {
// //    const char haystack[] = ;
//    const char needle[] = "coucou";
// //    char *ret;
//    char *ft_ret;

// //    ret = strnstr(((void *)0), needle, 13);
//    ft_ret = ft_strnstr("", needle, -1);

// //    printf("The substring is: %s\n", ret);
//    printf("The ft_substring is: %s\n", ft_ret);
//    return(0);
// }