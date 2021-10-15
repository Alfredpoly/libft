#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	ptr = (char *)malloc((i + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s1[j] != '\0')
	{
		ptr[j] = s1[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

// int main()
// {
//     char source[] = "I malloc so I am.";

//     // A copy of source is created dynamically
//     // and pointer to copy is returned.
//     char* target;
// 	target = strdup(source);

// 	char* test;
// 	test = strdup(source);

//     printf("%s\n", target);
// 	printf("%s", test);
//     return 0;
// }