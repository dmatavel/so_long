/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_formats.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 07:11:44 by dmatavel          #+#    #+#             */
/*   Updated: 2022/12/12 11:32:13 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_FORMATS_H
# define PRINTF_FORMATS_H

# include "libft.h"
# include <stdarg.h>

# define LOWER_HEX_BASE "0123456789abcdef"
# define UPPER_HEX_BASE "0123456789ABCDEF"

int	ft_eval_format(va_list args, const char format);
int	ft_print_char(char c);
int	ft_print_str(char *s);
int	ft_print_pointer(unsigned long n);
int	ft_print_int(int n);
int	ft_print_unsigned_int(unsigned int n);
int	ft_print_hex(unsigned int n, const char *base);

#endif //PRINTF_FORMATS_H
