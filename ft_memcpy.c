#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	int	i;

	i = 0;
	if (dest == 0 && src == 0)
	{
		return (NULL);
	}
	while (size--)
	{
		((char *)dest)[i] = ((const char *)src)[i];
		i++;
	}
	return ((char *)dest);
}
