/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:20:26 by dmatavel          #+#    #+#             */
/*   Updated: 2022/12/12 11:39:49 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/printf_formats.h"

int	ft_eval_format(va_list args, const char format)
{
	int	ret;

	ret = 0;
	if (format == 'c')
		ret += ft_print_char(va_arg(args, int));
	if (format == 's')
		ret += ft_print_str(va_arg(args, char *));
	if (format == 'p')
		ret += ft_print_pointer(va_arg(args, unsigned long));
	if (format == 'd' || format == 'i')
		ret += ft_print_int(va_arg(args, int));
	if (format == 'u')
		ret += ft_print_unsigned_int(va_arg(args, int));
	if (format == 'x')
		ret += ft_print_hex(va_arg(args, unsigned int), LOWER_HEX_BASE);
	if (format == 'X')
		ret += ft_print_hex(va_arg(args, unsigned int), UPPER_HEX_BASE);
	if (format == '%')
		ret += write(1, "%", 1);
	return (ret);
}
