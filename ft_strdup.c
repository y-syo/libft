#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*rst;
	int		i;

	i = 0;
	rst = malloc(sizeof(src) * (ft_strlen(src) + 1));
	if (!rst)
		return (NULL);
	while (src[i])
	{
		rst[i] = src[i];
		i++;
	}
	return (rst);
}
