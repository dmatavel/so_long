/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:27:47 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/06 10:00:38 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define EXT ".ber"
# define STATUS_ERROR_1 "Error\nThere isn't a valid map\n"
# define STATUS_ERROR_2 "Error\nMap file has not a .ber extension\n"
# define STATUS_ERROR_3 "Error\nMap file has invalid characters\n"

# include "libft/include/libft.h"
# include <fcntl.h>
# include <stdio.h>
# include <math.h>
# include <string.h>
# include "mlx/mlx.h"

typedef struct s_map
{
	int	space;
	int	wall;
	int	collectible;
	int	exit;
	int	player;
} t_map;

void	check_extension(char *s);
void	check_chars(char *arg);

#endif //SO_LONG_H
