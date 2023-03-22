/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:09:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/22 13:35:28 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	count_map_lines(char *arg)
{
	int		fd;
	int		i;
	char	*line;

	fd = open(arg, O_RDONLY);
	test_fd(fd);
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

void	parser_map(char *file)
{
	char	**map;

	map = read_map(file);
	chasing_the_chaff(map);
	evaluating_the_basis(map);
	testing_the_wall(map);
	anti_square(map);
	search_a_path(map);
	free(map);
	if (map != NULL)
		map = NULL;
}

int	main(int argc, char **argv)
{
	char	**map;
	t_mlx	mlx;
	t_graph	graph;
	
	test_map_file(argc, argv[1]);
	parser_map(argv[1]);
	map = read_map(argv[1]);
	mlx.mlx = mlx_init();
	get_frame(&graph, map);
	mlx.win = mlx_new_window(mlx.mlx, graph.width * 50,
			graph.height * 50, "so_long");
	display_map(&mlx, map);
	handle_window(&mlx);
	mlx_loop(mlx.mlx);
	return (EXIT_SUCCESS);
}
