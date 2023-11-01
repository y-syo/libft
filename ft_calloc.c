/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:55:05 by mmoussou          #+#    #+#             */
/*   Updated: 2023/11/01 22:00:39 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t elsize)
{
	void	*t;
	size_t	size;

	if (!n || !elsize)
		return (malloc(1));
	size = n * elsize;
	t = (void *)malloc(size);
	if (t)
		ft_bzero(t, size);
	return (t);
}
