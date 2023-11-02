/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:55:45 by mmoussou          #+#    #+#             */
/*   Updated: 2023/11/02 17:22:20 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little || !len)
		return ((char *)big);
	while (i < len)
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j])
			j++;
		if (j == (size_t)ft_strlen(little))
			return (&((char *)big)[i]);
		i++;
	}
	return (NULL);
}
