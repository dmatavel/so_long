/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:27:47 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/13 14:39:09 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define EXT ".ber"
# define STATUS_ERROR_1 "Error\nInsert a valid file.ber.\n"
# define STATUS_ERROR_2 "Error\nCheck the file extension.\n"
# define STATUS_ERROR_3 "Error\nMap file has invalid characters.\n"
# define STATUS_ERROR_4 "Error\nWrong number of exit, collectibles or player.\n"
# define STATUS_ERROR_5 "Error\nThe map must be rectantgular.\n"
# define STATUS_ERROR_6 "Error\nThe map must be surrounded by walls.\n"
# define STATUS_ERROR_7 "Error\nThe map must have a valid path.\n"

# include "libft/include/libft.h"
# include <fcntl.h>
# include <stdio.h>
# include "mlx/mlx.h"

typedef struct s_graph
{
	int	space;
	int	wall;
	int	collectible;
	int	exit;
	int	player;
	int	h;
	int	w;
	int	exit_h;
	int	exit_w;
}				t_graph;

typedef struct s_mlx
{
	void	*mlx;
	void	*win;
	void	*img;
	char	*exit_path;
	int		img_width;
	int		img_height;
} 				t_mlx;

void	test_map_file(int ac, char *file);
void	error(char *msg);
char	**read_map(char *arg);
void	chasing_the_chaff(char **map);
void	evaluating_the_basis(char **map);
void	testing_the_wall(char **map);
void	anti_square(char **map);
void	search_a_path(char **map);
void	open_window(t_mlx *mlx);

#endif //SO_LONG_H
