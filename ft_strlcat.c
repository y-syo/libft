#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dl;

	if (!dst || !src)
		return (0);
	dl = ft_strlen(dst);
	if (size <= dl)
		return (size + ft_strlen(src));
	return (dl + ft_strlcpy(dst + dl, src, size - dl));
}
