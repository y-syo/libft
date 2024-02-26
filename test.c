/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 02:55:16 by mmoussou          #+#    #+#             */
/*   Updated: 2024/02/26 03:00:54 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int fd = open(argv[1], O_RDONLY);
	char	*line = get_next_line(fd);
	while(line)
	{
		ft_printf("%s", line);
		free(line);
		line = get_next_line(fd);
	}
}
