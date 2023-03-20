/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:09:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/20 14:22:23 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	char	**map;
	int		i;
//	t_mlx	mlx;
	t_graph	graph;

	i = 0;
	test_map_file(argc, argv[1]);
	map = read_map(argv[1]);
	chasing_the_chaff(map);
	evaluating_the_basis(map);
	testing_the_wall(map);
	anti_square(map);
	get_graph_locations(&graph, map, -1, -1);
	search_a_path(map);
//	open_window(&mlx);
	return (EXIT_SUCCESS);
}
