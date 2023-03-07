/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:09:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/07 16:25:10 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	char	**map;
	int		i;

	i = 0;
	if (argc != 2 || argv[1] == NULL)
	{
		ft_printf(STATUS_ERROR_1);
		exit(EXIT_FAILURE);
	}
	check_extension(argv[1]);
	map = read_map(argv[1]);
	chasing_the_chaff(map);
	evaluating_the_basis(map);
	return (EXIT_SUCCESS);
}
