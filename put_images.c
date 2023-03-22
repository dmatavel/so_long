/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_images.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:45:44 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/22 13:36:42 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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

void	put_imgs(t_mlx *mlx, char **map)
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

void	display_map(t_mlx *mlx, char **map)
{
	set_imgs(mlx);
	put_imgs(mlx, map);
}
