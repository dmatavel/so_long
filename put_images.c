/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_images.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:45:44 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/29 15:39:50 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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
			{
				mlx_put_image_to_window(mlx->mlx, mlx->win,
					mlx->player_img, j * 50, i * 50);
				graph->y = i;
				graph->x = j;
			}
			else if (graph->map[i][j] == 'E')
				mlx_put_image_to_window(mlx->mlx, mlx->win,
					mlx->exit_img, j * 50, i * 50);
			else if (graph->map[i][j] == 'C')
				mlx_put_image_to_window(mlx->mlx, mlx->win,
					mlx->collect_img, j * 50, i * 50);
			else if (graph->map[i][j] == '1')
				mlx_put_image_to_window(mlx->mlx, mlx->win,
					mlx->wall_img, j * 50, i * 50);
			else if (graph->map[i][j] == '0')
				mlx_put_image_to_window(mlx->mlx, mlx->win,
					mlx->floor_img, j * 50, i * 50);
		}
	}
}
