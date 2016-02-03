# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wgulista <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/12 09:39:48 by wgulista          #+#    #+#              #
#    Updated: 2016/01/12 10:09:37 by wgulista         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
.PHONY: all, clean, fclean, re

NAME = get_next_line
LIBFT = libft.a
FLAGS = -Wall -Wextra -Werror

OBJET = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT)
	@gcc $(FLAGS) -I ./libft/includes/ -o get_next_line.o -c $(NAME)

$(LIBFT):
	@make -C ./libft

clean:
	@make clean -C ./libft/
	@rm -f $(OBJET)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C ./libft/

re: fclean all
