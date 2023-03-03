/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:27:31 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/03 14:43:30 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	istoken(int c)
{
	return (c == '0' || c == '1' || c == 'C'
		|| c == 'E' || c == 'P' || c == '\n');
}

void	check_chars(char *line)
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

void	check_itens(int	p, int e, int c)
{	
	if (p != 1)
	{
		ft_printf("Error\nThe map must contein one (1) player character\n");
		_Exit(EXIT_FAILURE);
	}
	if (e != 1)
	{
		ft_printf("Error\nThe map must contein one (1) exit character\n");
		_Exit(EXIT_FAILURE);
	}
	if (c == 0)
	{
		ft_printf("Error\nThe map must contein at least one (1) player character\n");
		_Exit(EXIT_FAILURE);
	}
}

int	find_player(char *line)
{
	int	i;
	static int	p;

	i = 0;
	p = 0;
	while (line[i])
	{
		if (line[i] == 'P')
			p += 1;
		i++;
	}
	return (p);
}

int	find_exit(char *line)
{
	int	i;
	static int	exit;

	i = 0;
	exit = 0;
	while (line[i])
	{
		if (line[i] == 'E')
			exit += 1;
		i++;
	}
	return (exit);
}

int	find_collectible(char *line)
{
	int	i;
	static int	collectible;

	i = 0;
	collectible = 0;
	while (line[i])
	{
		if (line[i] == 'C')
			collectible += 1;
		i++;
	}
	return (collectible);
}
void	read_map(char *arg)
{
	int		fd;
	int		i;
	char	*line;
	static t_map	iten;

	i = 0;
	iten.collectible = 0;
	iten.exit = 0;
	iten.player = 0;
	fd = open(arg, O_RDONLY);
	line = get_next_line(fd);
	while (line != NULL)
	{
		check_chars(line);
		iten.collectible = find_collectible(line);
		iten.player = find_player(line);
		iten.exit = find_exit(line);
		line = get_next_line(fd);
	}
	check_itens(iten.player, iten.exit, iten.collectible);
	free(line);
}
