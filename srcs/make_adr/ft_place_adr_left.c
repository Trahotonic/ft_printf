/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_adr_left.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:53:15 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/12 13:53:15 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../prlib.h"

void	ft_place_adr_left(unsigned long long n, t_specs specs)
{
	int		count;

	count = 0;
	ft_putchar('0');
	ft_putchar('x');
	while (count < specs.accuracy)
	{
		ft_putchar('0');
		count++;
	}
	ft_putstr(ft_allow(ft_itoa_base(n, 16)));
	count = 0;
	while (count < specs.width)
	{
		ft_putchar(' ');
		count++;
	}
}
