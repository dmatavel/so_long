/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:22:18 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/13 14:41:22 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	open_window(t_mlx *mlx)
{
	char	*exit_path = "./sprites/exit.xpm";
	int		img_width;
	int		img_height;

	mlx->mlx = mlx_init();
	mlx->win = mlx_new_window(mlx->mlx, 640, 360, "so_long");
	mlx->img = mlx_xpm_file_to_image(mlx->mlx, exit_path, &img_width, &img_height);
	mlx_put_image_to_window (mlx->mlx, mlx->win, mlx->img, img_width * 3, img_height * 6);
	mlx_loop(mlx->mlx);
}
