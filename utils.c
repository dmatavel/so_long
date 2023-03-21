/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:55:31 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/21 13:32:40 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	error(char *msg)
{
	ft_printf("%s", msg);
	exit(EXIT_FAILURE);
}

void	test_fd(int fd)
{
	if (fd == STATUS_ERROR)
		error(STATUS_ERROR_1);
}
