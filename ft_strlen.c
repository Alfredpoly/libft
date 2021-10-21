#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

// int	main()
// {
// 	char *str = "test";
// 	int len = strlen(str);
// 	int len2 = ft_strlen(str);
// 	printf("%s\n", str);
// 	printf("%d\n", len);
// 	printf("%d", len2);

// 	return 0;
// }