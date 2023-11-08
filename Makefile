# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoussou <mmoussou@student.42angoulem      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 16:34:08 by mmoussou          #+#    #+#              #
#    Updated: 2023/11/08 21:47:50 by mmoussou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

HEADER = .

# find -type f -name "*.c" | sed "s/\.\///g" | xargs -Iname echo "`printf '\t\t\t'`" name "\\"
SRCS =		ft_isdigit.c \
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
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \

BONUSSRCS = ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \

OBJS = $(SRCS:.c=.o)

BONUSOBJS = $(BONUSSRCS:.c=.o)



all: $(NAME)

bonus: $(OBJS) $(BONUSOBJS)
	ar -rcs $(NAME) $(OBJS) $(BONUSOBJS)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I $(HEADER) $< -c -o $@

so:
		$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
			gcc -nostartfiles -shared -o libft.so $(OBJS)

clean:
	rm $(OBJS) $(BONUSOBJS)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all fclean clean re
