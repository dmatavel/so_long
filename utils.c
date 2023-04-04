/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:55:31 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/30 14:48:22 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	error(char *msg)
{
	ft_printf("%s", msg);
	exit(EXIT_FAILURE);
}

void	test_fd(int fd)
{
	if (fd == STATUS_ERROR)
		error(STATUS_ERROR_1);
}

void	get_frame(t_graph *graph, char **map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i][j] != '\n')
		j++;
	while (map[i])
		i++;
	graph->height = i;
	graph->width = j;
}

void	free_map(char **map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		free(map[i]);
		i++;
	}
	free(map[i]);
	free(map);
	map = NULL;
}

int	ft_exit(t_mlx *mlx)
{
	free_map(mlx->graph->map);
	exit(EXIT_SUCCESS);
}
