/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:44:04 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/29 15:07:28 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	display_map(t_mlx *mlx, t_graph *graph)
{
	put_imgs(mlx, graph);
}

int	render(t_mlx *mlx)
{
	display_map(mlx, mlx->graph);
	return (0);
}
