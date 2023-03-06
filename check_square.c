/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:21:50 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/06 12:16:54 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_length(char *arg)
{
	char	*line;
	int		fd;
	int		i;
	int		j;

	fd = open(arg, O_RDONLY);
	line = get_next_line(fd);
	i = ft_strlen(line);
	while (line != NULL)
	{
		j = ft_strlen(line);
		if (i != j)
		{
			ft_printf(STATUS_ERROR_5);
			exit(EXIT_FAILURE);
		}
		free(line);
		line = get_next_line(fd); 
	}
	close(fd);
}

void	check_square(char *arg)
{
	char	*line;
	int		fd;
	int		i;
	int		j;

	fd = open(arg, O_RDONLY);
	line = get_next_line(fd);
	i = ft_strlen(line) - 1;
	j = 0;
	while (line != NULL)
	{
		j += 1;
		free(line);
		line = get_next_line(fd); 
	}
	if ((i / 2) == j)
	{
		ft_printf(STATUS_ERROR_5);
		exit(EXIT_FAILURE);
	}
	close(fd);
	check_length(arg);
}
