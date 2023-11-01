/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 23:06:24 by mmoussou          #+#    #+#             */
/*   Updated: 2023/10/31 19:11:33 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <limits.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

/* char */

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

int		ft_memset(int c);
int		ft_bzero(int c);
int		ft_memcpy(int c);
int		ft_memmove(int c);
int		ft_memchr(void);
int		ft_memcmp(void);

int		ft_strlcpy(int c);
int		ft_strlcat(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strchr(int c);
int		ft_strrchr(int c);
int		ft_strncmp(int c);
int		ft_strnstr(int c);

int		ft_atoi(int c);

/* strs */
int		ft_strlen(char const	*s);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_itoa(int n);

#endif
