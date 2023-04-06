NAME = so_long
SRCS = src/main.c src/validations.c src/check_format.c \
	   src/utils.c src/pathfinder.c src/put_images.c \
	   src/move.c src/append.c

OBJ = $(SRCS:.c=.o)
LIB_PATH = libft/
LIBFT = libft/libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

detected_OS := $(shell uname)

ifeq ($(detected_OS), Linux)
    MLX = mlx_linux
    MLX_FLAGS = -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz
    CFLAGS += -DOS=1
$(NAME): $(LIBFT) $(OBJ)
	make -C $(MLX) all
	$(CC) $(CFLAGS) $^ -o $@ $(LIBFT) $(MLX_FLAGS)
else ifeq ($(detected_OS), Darwin)
    MLX = mlx
    MLX_FLAGS = -I${LIB_ROOT}${MLX} -L${LIB_ROOT}${MLX} -lm -lmlx -framework \
                OpenGL -framework AppKit
    CFLAGS += -DOS=2
$(NAME): $(LIBFT) $(OBJ)
	make -C $(MLX) all
	$(CC) $(CFLAGS) $^ -o $@ $(MLX_FLAGS) $(LIBFT)
endif

$(LIBFT):
	make -C $(LIB_PATH) all

all: $(NAME)

clean:
	rm -f src/*.o
	make -C $(LIB_PATH) clean
	make -C $(MLX) clean

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT)

re: fclean all

.PHONY: include all clean fclean re
