#include "libft.h"

char	*strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (--i >= 0)
		if (s[i] == c)
			return (&s[i]);
	return (NULL);
}
