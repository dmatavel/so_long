/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:46:33 by dmatavel          #+#    #+#             */
/*   Updated: 2022/12/12 11:51:59 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	last;
	int		start_i;
	int		last_i;
	size_t	len;

	if (!s1)
		return (NULL);
	start = 0;
	while (s1[start] != '\0'
		&& (ft_strchr(set, s1[start]) != NULL))
		start++;
	last = ft_strlen(s1) - 1;
	while (s1[last] != '\0'
		&& (ft_strchr(set, s1[last]) != NULL) && last > start)
			last--;
	len = 0;
	start_i = start;
	last_i = last;
	while (start_i++ <= last_i)
		len++;
	return (ft_substr(s1, start, len));
}
