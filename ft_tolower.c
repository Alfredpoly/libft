#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if ((65 <= c) && (c <= 90))
	{
		c = c + 32;
	}
	return (c);
}
