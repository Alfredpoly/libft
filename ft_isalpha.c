#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if (((65 <= c) && (c <= 90)) || ((97 <= c) && (c <= 122)))
		return (1);
	else
		return (0);
}

// int main()
// {

// 	int i;

// 	i = -1;
// 	while (i < 530)
// 	{
// 		printf("\nResult is alpha: %d Result is ft_alpha: %d, %d", isalpha(i), ft_isalpha(i), i);
// 		i++;
// 	}
// 	// unsigned char c;
// 	// c = -1;
// 	// printf("\nResult when uppercase alphabet is passed: %d", isalpha(c));
// 	// printf("\nResult when uppercase alphabet is passed: %d", ft_isalpha(c));

// 	// c = 'h';
// 	// printf("\nResult when lowercase alphabet is passed: %d", isalpha(c));
// 	// printf("\nResult when lowercase alphabet is passed: %d", ft_isalpha(c));

// 	// c = '+';
// 	// printf("\nResult when non-alphabetic character is passed: %d", isalpha(c));
// 	// printf("\nResult when non-alphabetic character is passed: %d", ft_isalpha(c));

// 	// return 0;
// }

