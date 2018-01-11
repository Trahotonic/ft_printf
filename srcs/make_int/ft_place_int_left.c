/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_int_left.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:26:14 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/10 16:26:14 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../prlib.h"

void	ft_place_int_left(long long n, t_specs specs)
{
	int		count;

	if (specs.hh == 1)
		n = (signed char)n;
	if (specs.h == 1)
		n = (short)n;
	count = 0;
	if (specs.space == 1)
		ft_putchar(' ');
	if (n < 0 && n != -2147483648)
		ft_putchar('-');
	if (n >= 0 && specs.plus == 1)
		ft_putchar('+');
	while (count < specs.accuracy)
	{
		ft_putchar('0');
		count++;
	}
	if (n < 0)
		n = -n;
	ft_putstr(ft_itoa(n));
	count = 0;
	while (count < specs.width - specs.space)
	{
		ft_putchar(' ');
		count++;
	}
}
