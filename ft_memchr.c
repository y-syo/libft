#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (s[++i])
		if (((unsigned char *)s)[i] == (unsigned char *)c)
			return ((void *)s + i);
	return (NULL);
}
