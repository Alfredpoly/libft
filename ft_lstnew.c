#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;
	int		len;

	if (!content)
		return (NULL);
	len = ft_strlen(content);
	ptr = malloc(len * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}

// int main() {
// 	ft_lstnew(((void *)0));
// }