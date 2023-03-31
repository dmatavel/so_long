/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:56:37 by dmatavel          #+#    #+#             */
/*   Updated: 2022/09/21 18:11:28 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strrchr(const char *s, int c)

{
	size_t	i;

	i = ft_strlen(s) + 1;
	while (s[--i] != (char)c)
		if (i == 0)
			return (NULL);
	return ((char *)s + i);
}
