/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:41:00 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/08 11:09:10 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	count_map_lines(char *arg)
{
	int		fd;
	int		i;
	char	*line;

	fd = open(arg, O_RDONLY);
	i = 0;
	line = get_next_line(fd);
	while (line != NULL)
	{
		free(line);
		line = get_next_line(fd);
		i++;
	}
	close(fd);
	return (i);
}

char	**read_map(char *arg)
{
	int		fd;
	char	*line;
	char	**map;
	int		i;

	map = malloc((count_map_lines(arg)) * sizeof(char *));
	if (!map)
	{
		return (NULL);
	}
	i = 0;
	fd = open(arg, O_RDONLY);
	line = get_next_line(fd);
	while (line != NULL)
	{
		map[i] = ft_strdup(line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	map[i] = NULL;
	line = NULL;;
	close(fd);
	return (map);
}
