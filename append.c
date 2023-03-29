/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:36:54 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/29 15:42:04 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	close_window(t_mlx *mlx)
{
	mlx_destroy_window(mlx->mlx, mlx->win);
	exit(0);
}

void	display_map(t_mlx *mlx, t_graph *graph)
{
	put_imgs(mlx, graph);
}

void	set_imgs(t_mlx *mlx)
{
	int	img_width;
	int	img_height;

	mlx->player_img = mlx_xpm_file_to_image(mlx->mlx,
			PLAYER, &img_width, &img_height);
	mlx->exit_img = mlx_xpm_file_to_image(mlx->mlx,
			EXIT, &img_width, &img_height);
	mlx->wall_img = mlx_xpm_file_to_image(mlx->mlx,
			WALL, &img_width, &img_height);
	mlx->collect_img = mlx_xpm_file_to_image(mlx->mlx,
			COLLECT, &img_width, &img_height);
	mlx->floor_img = mlx_xpm_file_to_image(mlx->mlx,
			FLOOR, &img_width, &img_height);
}
