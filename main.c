/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:09:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/03 11:30:19 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	if (argc != 2 || argv[1] == NULL)
	{
		ft_printf(STATUS_ERROR_1);
		exit(EXIT_FAILURE);
	}
	check_map_ext(argv[1]);
	read_map(argv[1]);
	return (EXIT_SUCCESS);
}
