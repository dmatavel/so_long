/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:09:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/06 12:12:30 by dmatavel         ###   ########.fr       */
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
	check_extension(argv[1]);
	check_chars(argv[1]);
	count_chars(argv[1]);
	check_square(argv[1]);
	return (EXIT_SUCCESS);
}
