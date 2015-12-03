# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wgulista <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/03 17:35:14 by wgulista          #+#    #+#              #
#    Updated: 2015/12/03 18:15:32 by wgulista         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

FLAGS = -Wall -Wextra -Werror

SRC = $(shell ls -1 | grep "\.c")

OBJET = $(SRC:%.c=obj/%.o)

all: prepare compile_lib $(NAME)

prepare:
		@/bin/mkdir -p obj/

norm:
		@norminette $(SRC) $(HEADER)

$(NAME): $(OBJET)
		@ar rc $@ $(OBJET)
		@ranlib $(NAME)

compile_lib:
		@echo "\033[31mCompiling Libft Please wait ...\033[39m"

obj/%.o: %.c
		@gcc $(FLAGS) -I includes/ -o $@ -c $<
		@printf "\033[35m. \033[39m"

clean:
		@/bin/rm -rf obj/

fclean: clean
		@/bin/rm -f $(NAME)

re: fclean all
