/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:39:05 by mmoussou          #+#    #+#             */
/*   Updated: 2023/11/05 17:33:45 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

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
	while (s1[i + l])
		l++;
	while (is_charset(s1[i + l], set))
		l--;
	printf("%ld \n", l);
	r = ft_calloc(sizeof(char), l);
	if (!r)
		return (NULL);
	while (--l)
		r[l] = s1[i + l];
	return (r);
}
