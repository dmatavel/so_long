/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:44:00 by dmatavel          #+#    #+#             */
/*   Updated: 2023/04/04 16:35:31 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	test_bottom_line(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
		i++;
	j = -1;
	i--;
	while (map[i][++j] != '\n')
	{
		if (map[i][j] != '1')
			error(STATUS_ERROR_6);
	}
}

void	testing_the_wall(char **map)
{
	int	i;

	i = -1;
	while (map[0][++i] != '\n')
	{
		if (map[0][i] != '1')
			error(STATUS_ERROR_6);
	}
	i = 0;
	while (map[++i])
	{
		if (map[i][0] != '1' ||
			map[i][ft_strlen(map[i]) - 2] != '1')
			error(STATUS_ERROR_6);
	}
	test_bottom_line(map);
}

void	check_format(char **map)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = ft_strlen(map[i]);
	while (map[i])
	{
		k = ft_strlen(map[i]);
		if (j != k)
			error(STATUS_ERROR_5);
		i++;
	}
}
