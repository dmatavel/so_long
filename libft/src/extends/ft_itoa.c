/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:04:53 by dmatavel          #+#    #+#             */
/*   Updated: 2022/09/21 18:09:00 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static void	ft_putnbr(int n, char *s)
{
	int					un;
	char				digit;

	un = n;
	if (n <= -2147483648)
	{
		ft_strlcat(s, "-2147483648", 12);
		return ;
	}
	if (n < 0)
	{
		digit = '-';
		ft_strlcat(s, &digit, ft_strlen(s) + 1 + 1);
		un = -n;
	}
	if (un > 9)
		ft_putnbr(un / 10, s);
	digit = un % 10 + 48;
	ft_strlcat(s, &digit, ft_strlen(s) + 1 + 1);
}

char	*ft_itoa(int n)
{
	long int		un;
	unsigned int	digits;
	char			*str;

	if (n == 0)
		return (ft_strdup("0"));
	un = n;
	digits = 0;
	while (un != 0)
	{
		un /= 10;
		digits++;
	}
	if (n < 0)
		str = ft_calloc(sizeof(char), digits + 1 + 1);
	else
		str = ft_calloc(sizeof(char), digits + 1);
	if (str == NULL)
		return (NULL);
	ft_putnbr(n, str);
	return (str);
}
