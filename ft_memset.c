#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (s)
	{
		ptr = (char *)s;
		while (i < n)
		{
			ptr[i] = c;
			i++;
		}
	}
	return (s);
}
