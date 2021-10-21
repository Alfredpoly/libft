#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	ch;

	ch = c;
	while (*str != ch)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return ((char *)str);
}

// int main () {
// 	char str[] = "test.after";
// 	char ch = '.';
// 	char *ret;
// 	char *ft_ret;

// 	ret = strchr("test.after", 'a');
//    	ft_ret = ft_strchr("test.after", 'a');

// 	printf("String after |%c| is - |%s|\n", ch, ret);
// 	printf("String after |%c| is - |%s|\n", ch, ft_ret);

// 	return(0);
// }