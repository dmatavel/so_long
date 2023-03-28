/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:32:32 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/28 16:01:13 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_up(t_mlx *mlx)
{
	if (mlx->graph->map[mlx->graph->y - 1][mlx->graph->x] != '1'
			&& mlx->graph->map[mlx->graph->y - 1][mlx->graph->x] == '0')
	{
		mlx->graph->map[mlx->graph->y][mlx->graph->x] = '0';
		mlx->graph->map[mlx->graph->y - 1][mlx->graph->x] = 'P';
	}
//	mlx->steps++;
//	ft_printf("steps: %d\n", mlx->steps);
}

void	move_right(t_mlx *mlx)
{
	int	img_height;
	int	img_width;
	
	if (mlx->graph->map[mlx->graph->y][mlx->graph->x + 1] != '1'
			&& mlx->graph->map[mlx->graph->y][mlx->graph->x + 1] == '0')
	{
	 	mlx->player_img = mlx_xpm_file_to_image(mlx->mlx,
			 PLAYER_RIGHT, &img_width, &img_height);
		mlx->graph->map[mlx->graph->y][mlx->graph->x] = '0';
		mlx->graph->map[mlx->graph->y][mlx->graph->x + 1] = 'P';
	}
}

void	move_left(t_mlx *mlx)
{
	int	img_height;
	int	img_width;

	if (mlx->graph->map[mlx->graph->y][mlx->graph->x - 1] != '1'
			&& mlx->graph->map[mlx->graph->y][mlx->graph->x - 1] == '0')
	{
	 	mlx->player_img = mlx_xpm_file_to_image(mlx->mlx,
			 PLAYER, &img_width, &img_height);
		mlx->graph->map[mlx->graph->y][mlx->graph->x] = '0';
		mlx->graph->map[mlx->graph->y][mlx->graph->x - 1] = 'P';
	}
}

void	move_down(t_mlx *mlx)
{
	if (mlx->graph->map[mlx->graph->y + 1][mlx->graph->x] != '1'
			&& mlx->graph->map[mlx->graph->y + 1][mlx->graph->x] == '0')
	{
		mlx->graph->map[mlx->graph->y][mlx->graph->x] = '0';
		mlx->graph->map[mlx->graph->y + 1][mlx->graph->x] = 'P';
	}
//	mlx->steps++;
//	ft_printf("steps: %d\n", mlx->steps);
}

int	press_key_hook(int keycode, t_mlx *mlx)
{
	if (keycode == W)
		move_up(mlx);
	else if (keycode == D)
		move_right(mlx);
	else if (keycode == A)
		move_left(mlx);
	else if (keycode == S)
		move_down(mlx);
	//else if (keycode == ESC)
	//	close_window(mlx);
	return (0);
}
