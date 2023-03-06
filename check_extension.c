/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_extension.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:21:37 by dmatavel          #+#    #+#             */
/*   Updated: 2023/03/06 10:25:40 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_extension(char *s)
{
	char	*ext;
	int		len;

	ext = ft_strchr(s, '.');
	len = ft_strlen(s) - ft_strlen(ext);
	if (s[len + 4] != '\0'
		|| (ft_strncmp(ext, EXT, ft_strlen(ext)) != 0))
	{
		ft_printf(STATUS_ERROR_2);
		exit(EXIT_FAILURE);
	}
}
