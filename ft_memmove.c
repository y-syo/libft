#include "libft.h"

void	*memmove(void *dst, const void *src, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	size_t	i;

	i = 0;
	if (dst && src)
	{
		ptr1 = (char *)dst;
		ptr2 = (char *)src;
		if (s1 > s2)
			while (n--)
				ptr1[n] = ptr2[n];
		else
		{
			while (i < n)
			{
				ptr1[i] = ptr2[i];
				i++;
			}
		}
	}
	return (dst);
}
