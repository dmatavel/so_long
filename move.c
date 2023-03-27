/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:32:32 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/27 12:54:44 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	mov_up(t_mlx *mlx, t_graph *graph)
{
	int	i;
	int j;

	i = -1;
	while (map[++i])
	{
		j = -1;
		while (map[i][++j])
		{
			if (map[i][j] == 'P')
				mlx_put_image_to_window(mlx->mlx, mlx->win,
						mlx->player_img, j * 50, i * 50);
			else if (map[i][j] == 'E')
				mlx_put_image_to_window(mlx->mlx, mlx->win,
						mlx->exit_img, j * 50, i * 50);
			else if (map[i][j] == 'C')
				mlx_put_image_to_window(mlx->mlx, mlx->win,
						mlx->collect_img, j * 50, i * 50);
			else if (map[i][j] == '1')
				mlx_put_image_to_window(mlx->mlx, mlx->win,
						mlx->wall_img, j * 50, i * 50);
			else if (map[i][j] == '0')
				mlx_put_image_to_window(mlx->mlx, mlx->win,
						mlx->floor_img, j * 50, i * 50);
		}
	}
}

void	press_key_hook(int keycode, t_mlx *mlx)
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
}
