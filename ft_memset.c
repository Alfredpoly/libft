#include "libft.h"

void	*ft_memset(void *str, int c, size_t nb)
{
	unsigned char	*trs;

	trs = (unsigned char *)str;
	while (nb > 0)
	{
		*trs++ = c;
		nb--;
	}
	return (str);
}

// int main () {
//    char str[50];

//    strcpy(str,"This is string.h library function");
//    printf("%s\n",str);

//    memset(str,'$',1);
//    printf("%s\n", str);

//    ft_memset(str,'$',1);
//    printf("%s", str);
//    return(0);
// }