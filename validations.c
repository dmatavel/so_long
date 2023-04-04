/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:44:00 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/29 11:30:26 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	test_map_file(int ac, char *file)
{
	char	*ext;
	int		len;

	if (ac != 2 || !file)
		error(STATUS_ERROR_1);
	ext = ft_strchr(file, '.');
	len = ft_strlen(file) - ft_strlen(ext);
	if (file[len + 4] != '\0'
		|| (ft_strncmp(ext, FILE_EXT, ft_strlen(ext)) != 0))
		error(STATUS_ERROR_2);
}

int	grain(int c)
{
	return (c == '0' || c == '1' || c == 'C'
		|| c == 'E' || c == 'P' || c == '\n');
}

void	chasing_the_chaff(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (!grain(map[i][j]))
				error(STATUS_ERROR_3);
			j++;
		}
		i++;
	}	
}

void	weighing(int player, int exit, int collectible)
{
	if (exit != 1 || collectible == 0 || player != 1)
		error(STATUS_ERROR_4);
}

void	evaluating_the_basis(char **map, t_graph *graph)
{
	int		i;
	int		j;

	i = -1;
	graph->player = 0;
	graph->exit = 0;
	graph->collectible = 0;
	while (map[++i])
	{
		j = -1;
		while (map[i][++j])
		{
			if (map[i][j] == 'P')
				graph->player += 1;
			if (map[i][j] == 'E')
				graph->exit += 1;
			if (map[i][j] == 'C')
				graph->collectible += 1;
		}
	}
	weighing(graph->player, graph->exit, graph->collectible);
}
