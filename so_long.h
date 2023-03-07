/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:27:47 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/07 16:31:23 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define EXT ".ber"
# define STATUS_ERROR_1 "Error\nThere isn't a valid map.\n"
# define STATUS_ERROR_2 "Error\nEnter a valid map with a .ber extension.\n"
# define STATUS_ERROR_3 "Error\nMap file has invalid characters.\n"
# define STATUS_ERROR_4 "Error\nWrong number of exit, collectibles or player.\n"
# define STATUS_ERROR_5 "Error\nThe map must be rectantgular.\n"
# define STATUS_ERROR_6 "Error\nThe map must be surrounded by walls.\n"

# include "libft/include/libft.h"
# include <fcntl.h>
# include <stdio.h>
# include <math.h>
# include <string.h>
# include "mlx/mlx.h"

typedef struct s_graph
{
	int	space;
	int	wall;
	int	collectible;
	int	exit;
	int	player;
}	t_graph;

void	check_extension(char *s);
char	**read_map(char *arg);
void	chasing_the_chaff(char **map);
void	evaluating_the_basis(char **map);

#endif //SO_LONG_H
