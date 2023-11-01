#include "libft.h"

char	*strchr(const char *s, int c)
{
	size_t	i;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (&s[i]);
	return (NULL);
}
