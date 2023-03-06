/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:27:47 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/06 14:13:58 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define EXT ".ber"
# define STATUS_ERROR_1 "Error\nThere isn't a valid map.\n"
# define STATUS_ERROR_2 "Error\nEnter a valid map with a .ber extension.\n"
# define STATUS_ERROR_3 "Error\nMap file has invalid characters.\n"
# define STATUS_ERROR_4 "Error\nThe map must contain 1 exit, at least 1 collectible, and 1 starting position."
# define STATUS_ERROR_5 "Error\nThe map must be rectantgular."
# define STATUS_ERROR_6 "Error\nThe map must be surrounded by walls."

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
void	check_chars(char *arg);
void	count_chars(char *arg);
void	check_square(char *arg);
void	check_walls(char *arg);

#endif //SO_LONG_H
