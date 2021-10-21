#include "libft.h"

int	ft_isascii(int c)
{
	if ((0 <= c) && (c <= 127))
		return (1);
	else
		return (0);
}

// int main()
// {

// 	unsigned char c;
// 	c = '1';
// 	printf("%d", isascii(c));
// 	printf("%d\n", ft_isascii(c));

// 	c = 'h';
// 	printf("%d", isascii(c));
// 	printf("%d\n", ft_isascii(c));

// 	c = '+';
// 	printf("%d", isascii(c));
// 	printf("%d\n", ft_isascii(c));

// 	return 0;
// }