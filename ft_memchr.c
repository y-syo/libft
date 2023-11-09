/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:52:59 by mmoussou          #+#    #+#             */
/*   Updated: 2023/11/09 14:53:25 by yosyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (!s || !n)
		return (NULL);
	i = -1;
	while (((unsigned char *)s)[++i] && i < n)
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)s + i);
	if (c == 0)
		return ((void *)s + i);
	return (NULL);
}
