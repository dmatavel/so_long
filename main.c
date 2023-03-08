/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:09:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/08 10:29:37 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	char	**map;
	int		i;

	i = 0;
	if (argc != 2 || argv[1] == NULL)
		error(STATUS_ERROR_1);
	test_map_file(argv[1]);
	map = read_map(argv[1]);
	chasing_the_chaff(map);
	evaluating_the_basis(map);
	testing_the_wall(map);
	return (EXIT_SUCCESS);
}
