#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if ((060 <= c) && (c <= 071))
		return (1);
	else
		return (0);
}

// int main()
// {

// 	unsigned char c;
// 	c = '1';
// 	printf("%d", isdigit(c));
// 	printf("%d\n", ft_isdigit(c));

// 	c = 'h';
// 	printf("%d", isdigit(c));
// 	printf("%d\n", ft_isdigit(c));

// 	c = '+';
// 	printf("%d", isdigit(c));
// 	printf("%d\n", ft_isdigit(c));

// 	return 0;
// }
