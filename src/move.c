/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:32:32 by dmatavel          #+#    #+#             */
/*   Updated: 2023/04/04 16:36:02 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	move_up(t_mlx *mlx)
{
	if (mlx->graph->map[mlx->graph->y - 1][mlx->graph->x] != '1'
			&& mlx->graph->map[mlx->graph->y - 1][mlx->graph->x] == '0')
	{
		mlx->graph->map[mlx->graph->y][mlx->graph->x] = '0';
		mlx->graph->map[mlx->graph->y - 1][mlx->graph->x] = 'P';
		mlx->steps++;
		ft_printf("steps: %d.\n", mlx->steps);
	}
	else if (mlx->graph->map[mlx->graph->y - 1][mlx->graph->x] != '1'
			&& mlx->graph->map[mlx->graph->y - 1][mlx->graph->x] == 'C')
	{
		mlx->graph->map[mlx->graph->y][mlx->graph->x] = '0';
		mlx->graph->map[mlx->graph->y - 1][mlx->graph->x] = 'P';
		mlx->steps++;
		ft_printf("steps: %d.\n", mlx->steps);
		mlx->count++;
	}
	else if (mlx->graph->map[mlx->graph->y - 1][mlx->graph->x] != '1'
			&& mlx->graph->map[mlx->graph->y - 1][mlx->graph->x] == 'E'
			&& mlx->count == mlx->graph->collectible)
		ft_exit(mlx);
}

void	move_right(t_mlx *mlx)
{
	if (mlx->graph->map[mlx->graph->y][mlx->graph->x + 1] != '1'
			&& mlx->graph->map[mlx->graph->y][mlx->graph->x + 1] == '0')
	{
		mlx->player_img = mlx_xpm_file_to_image(mlx->mlx,
				PLAYER_RIGHT, &mlx->img_width, &mlx->img_height);
		mlx->graph->map[mlx->graph->y][mlx->graph->x] = '0';
		mlx->graph->map[mlx->graph->y][mlx->graph->x + 1] = 'P';
		mlx->steps++;
		ft_printf("steps: %d.\n", mlx->steps);
	}
	else if (mlx->graph->map[mlx->graph->y][mlx->graph->x + 1] != '1'
			&& mlx->graph->map[mlx->graph->y][mlx->graph->x + 1] == 'C')
	{
		mlx->graph->map[mlx->graph->y][mlx->graph->x] = '0';
		mlx->graph->map[mlx->graph->y][mlx->graph->x + 1] = 'P';
		mlx->steps++;
		ft_printf("steps: %d.\n", mlx->steps);
		mlx->count++;
	}
	else if (mlx->graph->map[mlx->graph->y][mlx->graph->x + 1] != '1'
			&& mlx->graph->map[mlx->graph->y][mlx->graph->x + 1] == 'E'
			&& mlx->count == mlx->graph->collectible)
		ft_exit(mlx);
}

void	move_left(t_mlx *mlx)
{
	if (mlx->graph->map[mlx->graph->y][mlx->graph->x - 1] != '1'
			&& mlx->graph->map[mlx->graph->y][mlx->graph->x - 1] == '0')
	{
		mlx->player_img = mlx_xpm_file_to_image(mlx->mlx,
				PLAYER, &mlx->img_width, &mlx->img_height);
		mlx->graph->map[mlx->graph->y][mlx->graph->x] = '0';
		mlx->graph->map[mlx->graph->y][mlx->graph->x - 1] = 'P';
		mlx->steps++;
		ft_printf("steps: %d.\n", mlx->steps);
	}
	else if (mlx->graph->map[mlx->graph->y][mlx->graph->x - 1] != '1'
			&& mlx->graph->map[mlx->graph->y][mlx->graph->x - 1] == 'C')
	{
		mlx->graph->map[mlx->graph->y][mlx->graph->x] = '0';
		mlx->graph->map[mlx->graph->y][mlx->graph->x - 1] = 'P';
		mlx->steps++;
		ft_printf("steps: %d.\n", mlx->steps);
		mlx->count++;
	}
	else if (mlx->graph->map[mlx->graph->y][mlx->graph->x - 1] != '1'
			&& mlx->graph->map[mlx->graph->y][mlx->graph->x - 1] == 'E'
			&& mlx->count == mlx->graph->collectible)
		ft_exit(mlx);
}

void	move_down(t_mlx *mlx)
{
	if (mlx->graph->map[mlx->graph->y + 1][mlx->graph->x] != '1'
			&& mlx->graph->map[mlx->graph->y + 1][mlx->graph->x] == '0')
	{
		mlx->graph->map[mlx->graph->y][mlx->graph->x] = '0';
		mlx->graph->map[mlx->graph->y + 1][mlx->graph->x] = 'P';
		mlx->steps++;
		ft_printf("steps: %d.\n", mlx->steps);
	}
	else if (mlx->graph->map[mlx->graph->y + 1][mlx->graph->x] != '1'
			&& mlx->graph->map[mlx->graph->y + 1][mlx->graph->x] == 'C')
	{
		mlx->graph->map[mlx->graph->y][mlx->graph->x] = '0';
		mlx->graph->map[mlx->graph->y + 1][mlx->graph->x] = 'P';
		mlx->count++;
		mlx->steps++;
		ft_printf("steps: %d.\n", mlx->steps);
	}
	else if (mlx->graph->map[mlx->graph->y + 1][mlx->graph->x] != '1'
			&& mlx->graph->map[mlx->graph->y + 1][mlx->graph->x] == 'E'
			&& mlx->count == mlx->graph->collectible)
		ft_exit(mlx);
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
	else if (keycode == ESC)
		close_window(mlx);
	return (0);
}
