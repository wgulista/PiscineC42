.PHONY: all, clean, fclean, re

NAME = fillit
LIBFT = libft.a
SRC_NAME = main.c fillit.c error.c read.c \

OBJ_PATH = obj
SRC_PATH = srcs

CFLAGS = -Wall -Wextra -Werror

OBJ = $(addprefix $(OBJ_PATH)/, $(SRC_NAME:.c=.o))

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	@gcc -Llibft $(OBJ) -lft -o $(NAME)

$(LIBFT):
	@make -C ./libft/

$(addprefix $(OBJ_PATH)/, %.o): $(addprefix $(SRC_PATH)/, %.c)
	@mkdir -p $(OBJ_PATH)
	@gcc $(CFLAGS) -o $@ -c $^

clean:
	@rm -fv $(OBJ)
	@rmdir -p $(OBJ_PATH) 2> /dev/null || true
	@make clean -C ./libft/

fclean: clean
	@rm -fv $(NAME)
	@make fclean -C ./libft/

re: fclean all
