/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:55:31 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/29 14:23:35 by dmatavel         ###   ########.fr       */
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

void	free_map(char **map, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(*(map + i));
		i++;
	}
	free(map);
}

int	ft_exit(void)
{
	exit(EXIT_SUCCESS);
}
