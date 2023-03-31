/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:36:54 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/31 12:31:35 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	close_window(t_mlx *mlx)
{
	mlx_destroy_window(mlx->mlx, mlx->win);
	ft_exit(mlx);
}

void	display_map(t_mlx *mlx, t_graph *graph)
{
	put_imgs(mlx, graph);
}

void	check_img(t_mlx *mlx, void *img)
{
	if (!img)
	{
		ft_printf("Error! Missing image.\n");
		ft_exit(mlx);
	}
}

void	set_imgs(t_mlx *mlx)
{
	int	img_width;
	int	img_height;

	mlx->player_img = mlx_xpm_file_to_image(mlx->mlx,
			PLAYER, &img_width, &img_height);
	check_img(mlx, mlx->player_img);
	mlx->exit_img = mlx_xpm_file_to_image(mlx->mlx,
			EXIT, &img_width, &img_height);
	check_img(mlx, mlx->exit_img);
	mlx->wall_img = mlx_xpm_file_to_image(mlx->mlx,
			WALL, &img_width, &img_height);
	check_img(mlx, mlx->wall_img);
	mlx->collect_img = mlx_xpm_file_to_image(mlx->mlx,
			COLLECT, &img_width, &img_height);
	check_img(mlx, mlx->collect_img);
	mlx->floor_img = mlx_xpm_file_to_image(mlx->mlx,
			FLOOR, &img_width, &img_height);
	check_img(mlx, mlx->floor_img);
}
