#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char		*d;
	const char	*s;
	char		*backd;
	const char	*backs;

	d = (char *)dest;
	s = (const char *)src;
	if (dest == 0 && src == 0)
	{
		return (NULL);
	}
	if (d < s)
	{
		while (size--)
			*d++ = *s++;
	}
	else
	{
		backd = d + (size - 1);
		backs = s + (size - 1);
		while (size--)
			*backd-- = *backs--;
	}	
	return (dest);
}

// int main()
// {
// 	char arr1[] = "foo-bar";
// 	char arr2[] = "foo-bar";

// 	printf("ft_memmove: %s\n", ft_memmove(arr1 + 3, arr1 + 2, 4));
// 	printf("memmove: %s\n", memmove(arr2 + 3, arr2 + 2, 4));

// }