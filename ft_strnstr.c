#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little)
		return (NULL);
	while (big[i + len - 1])
	{
		j = 0;
		while (j < len && big[i + j] == little[i])
			j++;
		if (j == len)
			return (&big[i]);
		i++;
	}
	return (NULL);
}
