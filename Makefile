# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoussou <mmoussou@student.42angoulem      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 16:34:08 by mmoussou          #+#    #+#              #
#    Updated: 2023/11/02 23:35:22 by yosyo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

HEADER = .

# find -type f -name "*.c" | sed "s/\.\///g" | xargs -Iname echo "`printf '\t\t\t'`" name "\\"
SRCS =			 ft_isdigit.c \
			 ft_strchr.c \
			 ft_memchr.c \
			 ft_isalnum.c \
			 ft_strtrim.c \
			 ft_calloc.c \
			 ft_substr.c \
			 ft_isprint.c \
			 ft_strdup.c \
			 ft_memcpy.c \
			 ft_strnstr.c \
			 ft_tolower.c \
			 ft_isalpha.c \
			 ft_strlcpy.c \
			 ft_strlen.c \
			 ft_atoi.c \
			 ft_memset.c \
			 ft_memcmp.c \
			 ft_isascii.c \
			 ft_strjoin.c \
			 ft_strncmp.c \
			 ft_strrchr.c \
			 ft_split.c \
			 ft_memmove.c \
			 ft_bzero.c \
			 ft_strlcat.c \
			 ft_toupper.c \


OBJS = $(SRCS:.c=.o)



all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I $(HEADER) $< -c -o $@

so:
		$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
			gcc -nostartfiles -shared -o libft.so $(OBJS)

clean:
	rm $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all fclean clean re
