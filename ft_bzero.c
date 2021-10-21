#include "libft.h"

void	ft_bzero(void *dest, size_t len)
{
	size_t	i;

	i = 0;
	while (i <= len - 1 && len != 0)
	{
		*(char *)dest = '\0';
		i++;
		dest++;
	}
}

// int main () {
//    char str[50];

//    strcpy(str,"This is string.h library function");
//    printf("%s\n",str);

//    bzero(str, 7);
//    printf("%s\n", str);

//    ft_bzero(str,7);
//    printf("%s", str);
//    return(0);
// }