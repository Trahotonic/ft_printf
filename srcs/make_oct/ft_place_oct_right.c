/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_oct_right.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:28:27 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/10 16:28:28 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../prlib.h"

void	ft_place_oct_right(unsigned long long n, t_specs specs)
{
	int 	count;
	char	fill;

	if (specs.hh == 1)
		n = (unsigned char)n;
	if (specs.h == 1)
		n = (unsigned short)n;
	count = 0;
	fill = ' ';
	if (specs.zero == 1)
		fill = '0';
	if (fill == '0' && specs.hash == 1)
		ft_putchar('0');
	while (count < specs.width)
	{
		ft_putchar(fill);
		count++;
	}
	count = 0;
	if (fill != '0' && specs.hash == 1)
		ft_putchar('0');
	while (count < specs.accuracy)
	{
		ft_putchar('0');
		count++;
	}
	ft_putstr(ft_itoa_base(n, 8));
}
