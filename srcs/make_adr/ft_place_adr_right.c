/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_adr_right.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:53:29 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/12 13:53:30 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../prlib.h"

void	ft_place_adr_right(unsigned long long n, t_specs specs)
{
	int 	count;
	char	fill;

	count = 0;
	fill = ' ';
	if (specs.zero == 1)
		fill = '0';
	if (fill == '0')
	{
		ft_putchar('0');
		ft_putchar('x');
	}
	while (count < specs.width)
	{
		ft_putchar(fill);
		count++;
	}
	count = 0;
	if (specs.zero != 1)
	{
		ft_putchar('0');
		ft_putchar('x');
	}
	while (count < specs.accuracy)
	{
		ft_putchar('0');
		count++;
	}
	ft_putstr(ft_allow(ft_itoa_base(n, 16)));
}
