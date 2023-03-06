/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_walls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:22:47 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/06 14:15:35 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	check_top_line(char *top_line)
{
	int	i;

	i = 0;
	while (top_line[i] != '\n')
	{
		if (top_line[i] != '1')
		{
			ft_printf(STATUS_ERROR_6);
			exit(EXIT_FAILURE);
		}
		i++;
	}
}

static char	*get_bottom_line(char *arg)
{
	char	*line;
	char	*bottom_line;
	int		fd;
	int		height;
	int		i;

	fd = open(arg, O_RDONLY);
	line = get_next_line(fd);
	height = 0;
	while (line != NULL)
	{
		free(line);
		line = get_next_line(fd);
		height += 1;
	}
	close(fd);
	fd = open(arg, O_RDONLY);
	i = 0;
	while (i < (height))
	{
		bottom_line = get_next_line(fd);
		i++;
	}
	close(fd);
	return (bottom_line);
}

static void	check_bottom_line(char *bottom_line)
{
	int	i;

	i = 0;
	while (bottom_line[i] != '\n')
	{
		if (bottom_line[i] != '1')
		{
			ft_printf(STATUS_ERROR_6);
			exit(EXIT_FAILURE);
		}
		i++;
	}
}

void	check_walls(char *arg)
{
	char	*line;
	char	*top_line;
	char	*bottom_line;
	int		fd;

	bottom_line = get_bottom_line(arg);
	check_bottom_line(bottom_line);
	free(bottom_line);
	fd = open(arg, O_RDONLY);
	line = get_next_line(fd);
	top_line = line;
	check_top_line(line);
	while (line != NULL)
	{
		if (line[0] != '1' || line[ft_strlen(line) - 2] != '1')
		{
			ft_printf(STATUS_ERROR_6);
			exit(EXIT_FAILURE);
		}
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
}
