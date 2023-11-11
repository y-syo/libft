# **************************************************************************** #
#                                                                              #
#                                                         :::    ::::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbouet   <>                               +#+  +:+       #+#         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 16:34:08 by kiroussa          #+#    #+#              #
#    Updated: 2023/11/11 23:46:55 by mmoussou         ###   ########.fr        #
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
			ft_lstiter.c \
			ft_lstmap.c \

OBJS = $(SRCS:.c=.o)

BONUSOBJS = $(BONUSSRCS:.c=.o)

COUNT	:=

define THIS_PROJECT_SHOULD_BE_OUTSTANDING
\033[0;34m

                                                ██▓     ██▓ ▄▄▄▄     █████▒▄▄▄█████▓
                                               ▓██▒    ▓██▒▓█████▄ ▓██   ▒ ▓  ██▒ ▓▒
                                               ▒██░    ▒██▒▒██▒ ▄██▒████ ░ ▒ ▓██░ ▒░
                                               ▒██░    ░██░▒██░█▀  ░▓█▒  ░ ░ ▓██▓ ░ 
                                               ░██████▒░██░░▓█  ▀█▓░▒█░      ▒██▒ ░ 
                                               ░ ▒░▓  ░░▓  ░▒▓███▀▒ ▒ ░      ▒ ░░   
                                               ░ ░ ▒  ░ ▒ ░▒░▒   ░  ░          ░    
                                                 ░ ░    ▒ ░ ░    ░  ░ ░      ░      
                                                   ░  ░ ░   ░                       
                                                               ░                                                  

\033[0;5;32m
                                                              ██
                  ██                                        ██▒▒██                                       ██                    
                ██▒▒██                                    ██▒▒▒▒░░██                                   ██▒▒██                  
              ██▒▒▒▒░░██                                  ██▒▒░░░░██                                 ██▒▒▒▒░░██                
              ██▒▒░░░░██                                ██▒▒░░░░    ██                               ██▒▒░░░░██                
            ██▒▒░░░░    ██                              ██░░░░░░    ██                             ██▒▒░░░░    ██              
            ██░░░░░░    ██                  ████████████░░░░░░        ████████████                 ██░░░░░░    ██              
████████████░░░░░░        ████████████      ██▒▒▒▒▒▒▒▒░░░░██    ██            ▒▒██     ████████████░░░░░░        ████████████  
██▒▒▒▒▒▒▒▒░░░░██    ██            ▒▒██        ██▒▒▒▒░░░░░░██    ██          ▒▒██       ██▒▒▒▒▒▒▒▒░░░░██    ██            ▒▒██  
  ██▒▒▒▒░░░░░░██    ██          ▒▒██            ██░░░░░░  ██    ██        ▒▒██           ██▒▒▒▒░░░░░░██    ██          ▒▒██    
    ██░░░░░░  ██    ██        ▒▒██                ██░░                  ▒▒██               ██░░░░░░  ██    ██        ▒▒██      
      ██░░                  ▒▒██                    ██                ▒▒██                   ██░░                  ▒▒██        
        ██                ▒▒██                      ██              ▒▒▒▒██                     ██                ▒▒██          
        ██              ▒▒▒▒██                    ██              ▒▒▒▒▒▒▒▒██                   ██              ▒▒▒▒██          
      ██              ▒▒▒▒▒▒▒▒██                  ██        ██████▒▒▒▒▒▒▒▒██                 ██              ▒▒▒▒▒▒▒▒██        
      ██        ██████▒▒▒▒▒▒▒▒██                ██      ████      ████▒▒▒▒░░██               ██        ██████▒▒▒▒▒▒▒▒██        
    ██      ████      ████▒▒▒▒░░██              ██    ██              ██░░░░██             ██      ████      ████▒▒▒▒░░██      
    ██    ██              ██░░░░██              ██████                  ██████             ██    ██              ██░░░░██      
    ██████                  ██████                                                         ██████                  ██████      

\033[0;32m
                _____ _____   _____ _   _  _____   _____ _   _ _____ _____ ___   _   _______ _____ _   _ _____               
               |_   _|  _  | |_   _| | | ||  ___| |  _  | | | /  ___|_   _/ _ \ | \ | |  _  \_   _| \ | |  __ \              
                 | | | | | |   | | | |_| || |__   | | | | | | \ `--.  | |/ /_\ \|  \| | | | | | | |  \| | |  \/              
                 | | | | | |   | | |  _  ||  __|  | | | | | | |`--. \ | ||  _  || . ` | | | | | | | . ` | | __               
                 | | \ \_/ /   | | | | | || |___  \ \_/ / |_| /\__/ / | || | | || |\  | |/ / _| |_| |\  | |_\ \              
                 \_/  \___/    \_/ \_| |_/\____/   \___/ \___/\____/  \_/\_| |_/\_| \_/___/  \___/\_| \_/\____/              


\033[0m
endef
export THIS_PROJECT_SHOULD_BE_OUTSTANDING


all: banner $(NAME)

banner:
	@printf "$$THIS_PROJECT_SHOULD_BE_OUTSTANDING"

bonus: $(OBJS) $(BONUSOBJS)	
	ar -rcs $(NAME) $(OBJS) $(BONUSOBJS)

$(NAME): $(OBJS)
	@echo -n "\033[0m\n\n󱉟 Making library.\r"
	@ar -rcs $(NAME) $(OBJS)
	@sleep 0.2
	@echo -n "\033[0m󱉟 Making library..\r"
	@sleep 0.2
	@echo -n "\033[0m󱉟 Making library...\r"
	@sleep 0.2
	@echo "\033[0m󱉟 Library done !    "

%.o: %.c
	$(eval COUNT += x)
	@echo -n "\033[107m\r󱌣 Compiling... : | "
	@for i in $(SRCS); do \
		echo -n ""; \
	done
	@echo -n " | $<       \r"
	@echo -n "󱌣 Compiling... : | "
	@for j in $(COUNT); do \
		echo -n ""; \
	done
	@$(CC) $(CFLAGS) -I $(HEADER) $< -c -o $@

clean:
	@for i in $(OBJS) $(BONUSOBJS); do \
		if test -f "$$i"; then \
			rm -f $$i; \
			sleep 0.02; \
			echo -n " Cleaned "; \
			echo -n "$$i   \r"; \
		fi; \
	done
	@echo " Cleaned all objects !      "
	@sleep 0.1

fclean: clean
	@if test -f "$(NAME)"; then \
		echo " Cleaned $(NAME)"; \
		sleep 0.1; \
		rm -f $(NAME); \
	fi


re: fclean all

.PHONY: all fclean clean re
