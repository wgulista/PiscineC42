.PHONY: all, clean, fclean, re

NAME = fillit
LIBFT = libft.a
SRC_NAME = 	main.c 					\
			check_tetriminos.c 		\
			list_tetri.c 			\
			tab.c 					\
			pos_piece.c 			\
			pos_piece2.c 			\
			pos_piece3.c 			\
			pos_piece4.c 			\
			pos_piece5.c 			\
			resolver.c 				\
			search_piece.c 			\
			search_piece2.c 		\


OBJ_PATH = obj
SRC_PATH = srcs

CFLAGS = -Wall -Wextra -Werror

OBJ = $(addprefix $(OBJ_PATH)/, $(SRC_NAME:.c=.o))

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	@gcc -Llibft $(OBJ) -lft -o $(NAME)
	@echo "\033[32mCompiling" [ $(NAME) ]"\033[0m"

$(LIBFT):
	@make -C ./libft/

$(addprefix $(OBJ_PATH)/, %.o): $(addprefix $(SRC_PATH)/, %.c)
	@mkdir -p $(OBJ_PATH)
	@gcc $(CFLAGS) -o $@ -c $^
	@echo "\033[33mLinking" [ $< ] "\033[0m"

clean:
	@rm -fv $(OBJ)
	@rm -Rf $(OBJ_PATH)
	@make clean -C ./libft/
	@echo "\033[31mCleaning" [ $(NAME) ] "...\033[0m"

fclean: clean
	@rm -fv $(NAME)
	@make fclean -C ./libft/
	@echo "\033[31mDelete" [ $(NAME) ] "\033[0m"

re: fclean all