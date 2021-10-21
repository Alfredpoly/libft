#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	ch;
	char	first;

	ch = c;
	first = *str;
	while (*str != '\0')
		str++;
	while (*str != ch)
	{
		if (*str == first)
			return (NULL);
		str--;
	}
	return ((char *)str);
}

// int main() {
// 	char str[] = "test.after";
// 	char ch = '.';
// 	char *ret;
// 	char *ft_ret;

// 	ret = strrchr("test.afte.r", '.');
//    	ft_ret = ft_strrchr("test.afte.r", '.');

// 	printf("String after |%c| is - |%s|\n", ch, ret);
// 	printf("String after |%c| is - |%s|\n", ch, ft_ret);

// 	return(0);
// }