/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntdgt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 00:41:58 by dmatavel          #+#    #+#             */
/*   Updated: 2022/07/17 01:00:40 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long	ft_cntdgt(long long n, int base)
{
	long long	ret;
	long long	digit;

	ret = 0;
	digit = n;
	if (digit == 0 || digit < 0)
		ret++;
	while (digit != 0)
	{
			digit /= base;
			ret++;
	}
	return (ret);
}
