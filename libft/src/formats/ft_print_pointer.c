/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:46:26 by dmatavel          #+#    #+#             */
/*   Updated: 2022/12/12 11:44:44 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static void	ft_print_ulong_hex(unsigned long n)
{
	char	*base;

	base = LOWER_HEX_BASE;
	if (n >= 16)
		ft_print_ulong_hex(n / 16);
	if (n > 10)
		ft_putchar_fd(base[n % 16], 1);
	else
		ft_putchar_fd(base[n % 16], 1);
}

int	ft_print_pointer(unsigned long n)
{
	char	*prfx;

	prfx = "0x";
	if ((void *)n == NULL)
		return (write(1, "0x0", 3));
	ft_putstr_fd(prfx, 1);
	ft_print_ulong_hex(n);
	return (ft_cntdgt(n, 16) + ft_strlen(prfx));
}
