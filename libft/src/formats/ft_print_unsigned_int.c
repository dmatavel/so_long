/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:33:03 by dmatavel          #+#    #+#             */
/*   Updated: 2022/12/12 11:43:59 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static void	ft_put_unsigned_nbr_fd(unsigned int n, int fd);

int	ft_print_unsigned_int(unsigned int n)
{
	ft_put_unsigned_nbr_fd(n, 1);
	return (ft_cntdgt(n, 10));
}

void	ft_put_unsigned_nbr_fd(unsigned int n, int fd)
{
	if (fd < 0)
		return ;
	if (n > 9)
		ft_put_unsigned_nbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + 48, fd);
}
