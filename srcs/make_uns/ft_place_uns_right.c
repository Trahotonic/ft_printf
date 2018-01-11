/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_uns_right.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 18:09:40 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/11 18:09:41 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../prlib.h"

void	ft_place_uns_right(unsigned long long n, t_specs specs)
{
	int		count;
	char	fill;

	if (specs.hh == 1)
		n = (unsigned char)n;
	if (specs.h == 1)
		n = (unsigned short)n;
	count = 0;
	fill = ' ';
	if (specs.zero == 1)
		fill = '0';
	if (specs.space == 1)
		ft_putchar(' ');
	if (n > 0 && specs.plus == 1 && fill == '0')
		ft_putchar('+');
	while (count < specs.width - specs.space)
	{
		ft_putchar(fill);
		count++;
	}
	if (n > 0 && specs.plus == 1 && fill != '0')
		ft_putchar('+');
	count = 0;
	while (count < specs.accuracy)
	{
		ft_putchar('0');
		count++;
	}
	ft_putstr(ft_uitoa_base(n, 10));
}
