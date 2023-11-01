/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:01:50 by mmoussou          #+#    #+#             */
/*   Updated: 2023/11/01 22:01:30 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*itoa_min_int(void)
{
	char	*r;

	r = malloc(11 * sizeof(char));
	r = "-2147483648";
	return (r);
}

static int	malloc_size(int n)
{
	int	t;

	t = 1;
	if (n < 0)
	{
		t++;
		n *= -1;
	}
	while (n > 10)
	{
		n /= 10;
		t++;
	}
	return (t + 1);
}

char	*ft_itoa(int n)
{
	char	*r;
	int		l;
	int		i;
	int		o;

	o = 1;
	if (n == -2147483648)
		return (itoa_min_int());
	l = malloc_size(n);
	r = malloc(l * sizeof(char));
	r[l] = 0;
	i = 1;
	if (n < 0)
	{
		r[--o] = '-';
		n *= -1;
		l--;
	}
	while (i != l)
	{
		r[(l - i) - o] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	return (r);
}
