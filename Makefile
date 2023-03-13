NAME = so_long
SRCS = main.c read_map.c validations.c\
	   validations2.c error.c pathfinder.c\
	   open_window.c

OBJ = $(SRCS:.c=.o)
LIB_PATH = libft/
LIBFT = libft/libft.a
MLX_PATH = mlx/
CC = cc
CFLAGS = -g -Wall -Wextra -Werror
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
