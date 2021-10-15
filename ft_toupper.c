#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if ((97 <= c) && (c <= 122))
	{
		c = c - 32;
	}
	return (c);
}

// int main() {
//     char c;

//     c = 'm';
//     printf("%c -> %c\n", c, toupper(c));

// 	printf("%c -> %c\n", c, ft_toupper(c));

//     c = 'D';
//     printf("\n%c -> %c\n", c, toupper(c));

// 	printf("%c -> %c\n", c, ft_toupper(c));

//     c = '9';
//     printf("\n%c -> %c\n", c, toupper(c));
// 	printf("%c -> %c\n", c, ft_toupper(c));
//     return 0;
// }