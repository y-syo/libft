/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:55:05 by mmoussou          #+#    #+#             */
/*   Updated: 2023/11/05 13:59:26 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t elsize)
{
	void	*t;
	size_t	size;

	if (n <= 0 || elsize <= 0)
		return (malloc(0));
	if ((elsize * n / n) != elsize)
		return (NULL);
	size = n * elsize;
	t = malloc(size);
	if (!t)
		return (NULL);
	if (t)
		ft_bzero(t, size);
	return (t);
}
