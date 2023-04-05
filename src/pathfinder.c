/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pathfinder.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:40:10 by dmatavel          #+#    #+#             */
/*   Updated: 2023/04/05 09:24:10 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	catch_the_player(t_graph *player, char **map)
{
	int		i;
	int		j;

	i = -1;
	while (map[++i])
	{
		j = -1;
		while (map[i][++j])
		{
			if (map[i][j] == 'P')
			{
				player->h = i;
				player->w = j;
			}
		}
	}
}

int	something_remains(char **map)
{
	t_graph	tile;
	int		i;
	int		j;

	i = -1;
	tile.exit = 0;
	tile.collectible = 0;
	while (map[++i])
	{
		j = -1;
		while (map[i][++j])
		{
			if (map[i][j] == 'E')
				tile.exit += 1;
			if (map[i][j] == 'C')
				tile.collectible += 1;
		}
	}
	if (tile.collectible != 0 || tile.exit != 0)
		return (1);
	return (0);
}

int	pathfinder(char **map, int height, int width)
{
	if (map[height][width - 1] == 'E' || map[height][width - 1] == 'C'
		|| map[height][width - 1] == '0')
	{
		map[height][width - 1] = 'X';
		pathfinder(map, height, width - 1);
	}
	if (map[height][width + 1] == 'E' || map[height][width + 1] == 'C'
		|| map[height][width + 1] == '0')
	{
		map[height][width + 1] = 'X';
		pathfinder(map, height, width + 1);
	}
	if (map[height - 1][width] == 'E' || map[height - 1][width] == 'C'
		|| map[height - 1][width] == '0')
	{
		map[height - 1][width] = 'X';
		pathfinder(map, height - 1, width);
	}
	if (map[height + 1][width] == 'E' || map[height + 1][width] == 'C'
		|| map[height + 1][width] == '0')
	{
		map[height + 1][width] = 'X';
		pathfinder(map, height + 1, width);
	}
	return (something_remains(map));
}

void	search_a_path(char **map)
{
	t_graph	player;
	int		height;
	int		width;
	int		path;

	catch_the_player(&player, map);
	height = player.h;
	width = player.w;
	path = pathfinder(map, height, width);
	if (path != 0)
		error(STATUS_ERROR_7);
}
