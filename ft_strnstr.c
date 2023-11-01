/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:55:45 by mmoussou          #+#    #+#             */
/*   Updated: 2023/11/01 21:56:29 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			return (&((char *)big)[i]);
		i++;
	}
	return (NULL);
}
