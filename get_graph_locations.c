/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_graph_locations.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:33:32 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/20 14:09:40 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	get_graph_locations(t_graph *graph, char **map, int	i, int	j)
{
	while (map[++i])
	{
		while (map[i][++j])
		{
			if (map[i][j] == 'P')
			{
				graph->player_h = i;
				graph->player_w = j;
			}
			if (map[i][j] == 'E')
			{
				graph->exit_h = i;
				graph->exit_w = j;
			}
			if (map[i][j] == 'C')
			{
				graph->collect_h = i;
				graph->collect_w = j;
			}
		}
	}
}

void	graph_locations(t_graph *graph, char **map, int	i, int	j)
{
	while (map[++i])
	{
		while (map[i][++j])
		{
			if (map[i][j] == '1')
			{
				graph->player_h = i;
				graph->player_w = j;
			}
			if (map[i][j] == '0')
			{
				graph->exit_h = i;
				graph->exit_w = j;
			}
		}
	}
}
