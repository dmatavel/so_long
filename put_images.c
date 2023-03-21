/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_images.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:45:44 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/21 15:54:38 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	file_to_img(t_mlx *data)
{
	int	img_width;
	int	img_height;

	data->player_img = mlx_xpm_file_to_image(data->mlx, PLAYER,
			&img_width, &img_height);
	data->exit_img = mlx_xpm_file_to_image(data->mlx, EXIT,
			&img_width, &img_height);
	data->collect_img = mlx_xpm_file_to_image(data->mlx, COLLECT,
			&img_width, &img_height);
	data->wall_img = mlx_xpm_file_to_image(data->mlx, WALL,
			&img_width, &img_height);
	data->floor_img = mlx_xpm_file_to_image(data->mlx, FLOOR,
			&img_width, &img_height);
}

void	put_player(t_mlx *data, int i, int j)
{
	mlx_put_image_to_window(data->mlx, data->win, data->player_img,
			50 * j, 50 * i);
}

void	put_imgs(t_mlx *data, char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][++j])
		{
			if (map[i][j] == 'P')
				put_player(data, i, j);
			/*
			if (map[i][j] == 'E')
				put_exit(i, j);
			if (map[i][j] == 'C')
				put_collect(i, j);
			if (map[i][j] == '1')
				put_wall(i, j);
			if (map[i][j] == '0')
				put_floor(i, j);
		}
		*/
			j++;
		}
		i++;
	}
}
