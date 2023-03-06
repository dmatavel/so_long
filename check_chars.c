/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_chars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:27:31 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/06 10:21:06 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	istoken(int c)
{
	return (c == '0' || c == '1' || c == 'C'
		|| c == 'E' || c == 'P' || c == '\n');
}

static void	check_tokens(char *line)
{
	int	i;

	i = 0;
	while (line[i])
	{
		if (!istoken(line[i]))
		{
			ft_printf(STATUS_ERROR_3);
			exit(EXIT_FAILURE);
		}
		i++;
	}
}

void	check_chars(char *arg)
{
	int		fd;
	char	*line;

	fd = open(arg, O_RDONLY);
	line = get_next_line(fd);
	while (line != NULL)
	{
		check_tokens(line);
		free(line);
		line = get_next_line(fd);
	}
}
