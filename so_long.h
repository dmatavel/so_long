/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:27:47 by dmatavel          #+#    #+#             */
/*   Updated: 2023/02/28 16:25:07 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define EXT ".ber"
# define STATUS_ERROR_1 "Error\nThere isn't a valid map\n"
# define STATUS_ERROR_2 "Error\nMap file has not a .ber extension\n"

# include "libft/include/libft.h"
# include <fcntl.h>
# include <stdio.h>
# include <math.h>
# include <string.h>
# include "mlx/mlx.h"

void	check_map_ext(char *s);

#endif //SO_LONG_H
