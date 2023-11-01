# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoussou <mmoussou@student.42angoulem      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 16:34:08 by mmoussou          #+#    #+#              #
#    Updated: 2023/10/31 17:07:10 by mmoussou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

HEADER = libft.h

SRCS = 		 ./ft_strtrim.c \
			 ./ft_substr.c \
			 ./ft_isalpha.c \
			 ./ft_strlen.c \
			 ./ft_strjoin.c \

OBJS = $(SRCS:.c=.o)



all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I $(HEADER) $< -c -o $@

clean:
	rm $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all fclean clean re
