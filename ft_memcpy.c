#include "libft.h"

void	*memcpy(void *dst, const void *src, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	size_t	i;

	i = 0;
	if (dst && src)
	{
		ptr1 = (char *)dst;
		ptr2 = (char *)src;
		while (i < n)
		{
			ptr1[i] = ptr2[i];
			i++;
		}
	}
	return (dst);
}
