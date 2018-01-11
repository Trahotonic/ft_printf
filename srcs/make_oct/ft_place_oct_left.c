/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_oct_left.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:28:15 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/10 16:28:15 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../prlib.h"

void	ft_place_oct_left(unsigned long long n, t_specs specs)
{
	int		count;

	if (specs.hh == 1)
		n = (unsigned char)n;
	if (specs.h == 1)
		n = (unsigned short)n;
	count = 0;
	if (specs.hash == 1)
		ft_putchar('0');
	while (count < specs.accuracy)
	{
		ft_putchar('0');
		count++;
	}
	ft_putstr(ft_itoa_base(n, 8));
	count = 0;
	while (count < specs.width)
	{
		ft_putchar(' ');
		count++;
	}
}
