#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	char	*ptr1;
	char	*ptr2;

	if (!s1 || !s2)
		return (0);
	ptr1 = (unsigned char *) s1;
	ptr2 = (unsigned char *) s2;
	while (n && *ptr1 == *ptr2)
	{
		ptr1++;
		ptr2++;
		n--;
	}
	return (*ptr1 - *ptr2);
}
