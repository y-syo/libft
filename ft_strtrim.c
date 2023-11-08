/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:39:05 by mmoussou          #+#    #+#             */
/*   Updated: 2023/11/08 23:19:35 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, char const *set)
{
	size_t	i;

	i = -1;
	while (set[++i])
		if (c == set[i])
			return (1);
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	o;
	int		i;
	char	*r;

	if (!s1[0] || !set[0])
		return ((char *)s1);
	o = 0;
	while (s1[o] && is_charset(s1[o], set))
		o++;
	i = ft_strlen(s1) - o - 1;
	while (i > 0 && is_charset(s1[o + i], set))
		i--;
	if (!i)
		return (malloc(0));
	r = ft_calloc(sizeof(char), i + 2);
	if (!r)
		return (NULL);
	while (i + 1)
	{
		r[i] = s1[o + i];
		i--;
	}
	return (r);
}
