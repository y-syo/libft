/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:39:05 by mmoussou          #+#    #+#             */
/*   Updated: 2023/10/31 17:51:21 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, char const *set)
{
	size_t	i;
	int		r;

	i = -1;
	r = 0;
	while (set[++i])
		if (c == set[i])
			r = 1;
	return (r);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*r;
	size_t	i;
	size_t	l;

	l = 0;
	i = 0;
	while (s1[i] && is_charset(s1[i], set))
		i++;
	while (s1[++i])
		l++;
	while (is_charset(s1[--i], set))
		l--;
	r = malloc(l * sizeof(char));
	if (!r)
		return (NULL);
	r[l] = 0;
	i = 0;
	while (s1[i] && is_charset(s1[i], set))
		i++;
	while (--l)
		r[l] = s1[i + l];
	return (r);
}
