/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:09:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/29 15:20:46 by dmatavel         ###   ########.fr       */
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
	i++;
	close(fd);
	return (i);
}

char	**read_map(char *arg, t_graph *graph)
{
	int		fd;
	char	*line;
	int		i;

	graph->map = malloc((count_map_lines(arg)) * sizeof(char *));
	if (!graph->map)
	{
		return (NULL);
	}
	i = 0;
	fd = open(arg, O_RDONLY);
	line = get_next_line(fd);
	while (line != NULL)
	{
		graph->map[i] = ft_strdup(line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	graph->map[i] = NULL;
	close(fd);
	return (graph->map);
}

void	check_map(char *file, t_graph *graph)
{
	graph->map = read_map(file, graph);
	chasing_the_chaff(graph->map);
	evaluating_the_basis(graph->map, graph);
	testing_the_wall(graph->map);
	anti_square(graph->map);
	search_a_path(graph->map);
	free_map(graph->map, count_map_lines(file));
}

int	render(t_mlx *mlx)
{
	display_map(mlx, mlx->graph);
	return (0);
}

int	main(int argc, char **argv)
{
	t_mlx	mlx;
	t_graph	graph;

	mlx.graph = &graph;
	test_map_file(argc, argv[1]);
	check_map(argv[1], &graph);
	graph.map = read_map(argv[1], &graph);
	get_frame(&graph, graph.map);
	mlx.mlx = mlx_init();
	set_imgs(&mlx);
	mlx.win = mlx_new_window(mlx.mlx, graph.width * 50,
			graph.height * 50, "so_long");
	mlx_hook(mlx.win, 17, 0, ft_exit, &mlx);
	mlx_key_hook(mlx.win, press_key_hook, &mlx);
	mlx_loop_hook(mlx.mlx, render, &mlx);
	mlx_loop(mlx.mlx);
	return (EXIT_SUCCESS);
}
