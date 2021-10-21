#include "libft.h"

int	ft_isalnum(int c)
{
	if (((060 <= c) && (c <= 071)) || ((65 <= c)
			&& (c <= 90)) || ((97 <= c) && (c <= 122)))
		return (1);
	else
		return (0);
}

// int main()
// {

// 	unsigned char c;
// 	c = '1';
// 	printf("%d", isalnum(c));
// 	printf("%d\n", ft_isalnum(c));

// 	c = 'h';
// 	printf("%d", isalnum(c));
// 	printf("%d\n", ft_isalnum(c));

// 	c = '+';
// 	printf("%d", isalnum(c));
// 	printf("%d\n", ft_isalnum(c));

// 	return 0;
// }