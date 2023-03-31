/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:51:20 by dmatavel          #+#    #+#             */
/*   Updated: 2022/09/21 18:10:41 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dc;
	const char	*sc;

	if (dest == NULL && src == NULL)
		return (0);
	dc = dest;
	sc = src;
	if (dc < sc)
	{
		while (n--)
			*dc++ = *sc++;
	}
	else
	{
		dc += n - 1;
		sc += n - 1;
		while (n--)
			*dc-- = *sc--;
	}
	return (dest);
}
