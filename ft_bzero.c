#include <stdio.h>
#include <string.h>

void	ft_bzero(char *str, int nb)
{
	int	i;

	i = 0;
	while (i <= nb - 1)
	{
		str[i] = '\0';
		i++;
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