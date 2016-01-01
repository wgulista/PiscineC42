# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wgulista <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/03 17:35:14 by wgulista          #+#    #+#              #
#    Updated: 2015/12/31 14:15:31 by wgulista         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all $(NAME) norm clean fclean re

NAME = libft.a

HEADER = libft.h

FLAGS = -Wall -Wextra -Werror

SRC = $(shell ls -1 | grep "\.c")

OBJET = $(SRC:%.c=%.o)

all: $(NAME)

norm:
		@norminette $(SRC) $(HEADER)

$(NAME): $(OBJET)
		@ar rc $@ $(OBJET)
		@ranlib $(NAME)

clean:
		@/bin/rm -f *.o

fclean: clean
		@/bin/rm -f $(NAME)

re: fclean all
