/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:20:24 by dmatavel          #+#    #+#             */
/*   Updated: 2022/09/21 18:10:36 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dc;
	const char	*sc;

	if (dest == NULL && src == NULL)
		return (0);
	dc = dest;
	sc = src;
	while (n--)
		*dc++ = *sc++;
	return (dest);
}
