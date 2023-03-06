/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_chars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:47:20 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/06 11:57:42 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	count_player(int c)
{
	int	i;

	i = 0;
	if (c == 'P')
		i += 1;
	return (i);
}

static int	count_exit(int c)
{
	int	i;

	i = 0;
	if (c == 'E')
		i += 1;
	return (i);
}

static int	count_collectible(int c)
{
	int	i;

	i = 0;
	if (c == 'C')
		i += 1;
	return (i);
}

static void	validate_chars(int p, int e, int c)
{
	if (e != 1 || c == 0 || p != 1)
	{
		ft_printf(STATUS_ERROR_4);
		exit(EXIT_FAILURE);
	}
}

void	count_chars(char *arg)
{
	int		fd;
	char	*line;
	int		i;
	t_graph	graph;

	fd = open(arg, O_RDONLY);
	line = get_next_line(fd);
	graph.player = 0;
	graph.exit = 0;
	graph.collectible = 0;
	while (line != NULL)
	{
		i = 0;
		while (line[i])
		{
			graph.exit += count_exit(line[i]);
			graph.collectible += count_collectible(line[i]);
			graph.player += count_player(line[i]);
			i++;
		}
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	validate_chars(graph.player, graph.exit, graph.collectible);
}
