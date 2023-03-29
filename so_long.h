/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:27:47 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/29 12:43:28 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft/include/libft.h"
# include <fcntl.h>
# include <stdio.h>
# include "mlx/mlx.h"

# define FILE_EXT ".ber"
# define EXIT "./sprites/exit.xpm"
# define PLAYER "./sprites/player.xpm"
# define PLAYER_RIGHT "./sprites/player_right.xpm"
# define WALL "./sprites/wall.xpm"
# define COLLECT "./sprites/collect.xpm"
# define FLOOR "./sprites/floor.xpm"

# define ESC 53
# define A 0
# define W 13
# define S 1
# define D 2

# define STATUS_ERROR_1 "Error\nInsert a valid file.ber.\n"
# define STATUS_ERROR_2 "Error\nCheck the file extension.\n"
# define STATUS_ERROR_3 "Error\nMap file has invalid characters.\n"
# define STATUS_ERROR_4 "Error\nWrong number of exit, collectibles or player.\n"
# define STATUS_ERROR_5 "Error\nThe map must be rectantgular.\n"
# define STATUS_ERROR_6 "Error\nThe map must be surrounded by walls.\n"
# define STATUS_ERROR_7 "Error\nThe map must have a valid path.\n"

typedef struct s_graph
{
	int	space;
	int	wall;
	int	collectible;
	int	exit;
	int	player;
	int	h;
	int	w;
	int	height;
	int	width;
	int	x;
	int	y;
	char **map;
}				t_graph;

typedef struct s_mlx
{
	void	*mlx;
	void	*win;
	void	*player_img;
	void	*exit_img;
	void	*collect_img;
	void	*floor_img;
	void	*wall_img;
	int		steps;
	int		count;
	t_graph	*graph;
} 				t_mlx;

int	ft_exit(void);
void	error(char *msg);
void	test_fd(int fd);
void	free_map(char **map, int n);
int 	count_map_lines(char *arg);
void	get_frame(t_graph *graph, char **map);
void	test_map_file(int ac, char *file);
void	chasing_the_chaff(char **map);
void	evaluating_the_basis(char **map, t_graph *graph);
void	testing_the_wall(char **map);
void	anti_square(char **map);
void	search_a_path(char **map);
void	put_imgs(t_mlx *mlx, t_graph *graph);
void	set_imgs(t_mlx *mlx);
void	close_window(t_mlx *mlx);
int		press_key_hook(int keycode, t_mlx *mlx);
int		exit_hook(t_mlx *mlx);
void	handle_window(t_mlx *mlx, char **map);
void	display_map(t_mlx *mlx, t_graph *graph);
void	set_imgs(t_mlx *mlx);

#endif //SO_LONG_H
