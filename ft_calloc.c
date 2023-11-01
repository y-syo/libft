#include "libft.h"

void	*ft_calloc(size_t n, size_t elsize)
{
	void	*t;
	size_t	size;

	if (!n || !size)
		return (malloc(1));
	size = n * elsize;
	target = (void *)malloc(size);
	if (target)
		ft_bzero(target, size);
	return (target);
}
