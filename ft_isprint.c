#include "libft.h"

int	ft_isprint(int c)
{
	if ((32 <= c) && (c < 127))
		return (1);
	else
		return (0);
}

// int main()
// {

// 	unsigned char c;
// 	c = '1';
// 	printf("%d", isprint(c));
// 	printf("%d\n", ft_isprint(c));

// 	c = 'h';
// 	printf("%d", isprint(c));
// 	printf("%d\n", ft_isprint(c));

// 	c = '+';
// 	printf("%d", isprint(c));
// 	printf("%d\n", ft_isprint(c));

// 	return 0;
// }
