/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_images.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:45:44 by dmatavel          #+#    #+#             */
/*   Updated: 2023/04/04 16:36:28 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	put_player_img(t_mlx *mlx, int i, int j)
{
	mlx_put_image_to_window(mlx->mlx, mlx->win,
		mlx->player_img, j * 50, i * 50);
	mlx->graph->y = i;
	mlx->graph->x = j;
}

void	put_exit_img(t_mlx *mlx, int i, int j)
{
	mlx_put_image_to_window(mlx->mlx, mlx->win,
		mlx->exit_img, j * 50, i * 50);
}

void	put_collect_img(t_mlx *mlx, int i, int j)
{
	mlx_put_image_to_window(mlx->mlx, mlx->win,
		mlx->collect_img, j * 50, i * 50);
}

void	put_wall_img(t_mlx *mlx, int i, int j)
{
	mlx_put_image_to_window(mlx->mlx, mlx->win,
		mlx->wall_img, j * 50, i * 50);
}

void	put_imgs(t_mlx *mlx, t_graph *graph)
{
	int	i;
	int	j;

	i = -1;
	while (graph->map[++i])
	{
		j = -1;
		while (graph->map[i][++j])
		{
			if (graph->map[i][j] == 'P')
				put_player_img(mlx, i, j);
			else if (graph->map[i][j] == 'E')
				put_exit_img(mlx, i, j);
			else if (graph->map[i][j] == 'C')
				put_collect_img(mlx, i, j);
			else if (graph->map[i][j] == '1')
				put_wall_img(mlx, i, j);
			else
				mlx_put_image_to_window(mlx->mlx, mlx->win,
					mlx->floor_img, j * 50, i * 50);
		}
	}
}
