NAME = so_long
SRCS = src/main.c src/validations.c src/check_format.c src/utils.c \
	   src/pathfinder.c src/put_images.c src/move.c src/append.c

OBJ = $(SRCS:.c=.o)
LIB_PATH = libft/
LIBFT = libft/libft.a
MLX_PATH = mlx/
CC = cc
CFLAGS = -Wall -Wextra -Werror
LINKS = -Lmlx -lmlx -framework OpenGL -framework AppKit 

$(NAME): $(LIBFT) $(OBJ)
	make -C $(MLX_PATH) all
	$(CC) $(CFLAGS) $(LINKS) $^ -o $@ $(LIBFT)

$(LIBFT):
	make -C $(LIB_PATH) all

all: $(NAME)

clean:
	rm -f *.o
	make -C $(LIB_PATH) clean
	make -C $(MLX_PATH) clean

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT)

re: fclean all

.PHONY: include all clean fclean re
