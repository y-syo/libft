/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:02:20 by mmoussou          #+#    #+#             */
/*   Updated: 2023/11/02 16:48:20 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*rst;
	int		i;

	i = 0;
	rst = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!rst)
		return (NULL);
	while (src[i])
	{
		rst[i] = src[i];
		i++;
	}
	rst[i] = 0;
	return (rst);
}
