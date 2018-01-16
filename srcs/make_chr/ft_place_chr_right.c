/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_chr_right.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:42:32 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/12 18:42:32 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../prlib.h"

int	ft_place_chr_right(unsigned int c, t_specs specs, char uni)
{
	int	count;
	int ret;
	char fill;

	count = 0;
	ret = 0;
	fill = ' ';
	if (specs.zero == 1)
		fill = '0';
	while (count < specs.width)
	{
		ft_putchar(fill);
		count++;
		ret++;
	}
	if (uni == 'C')
		ft_print_uni(c);
	else
		ft_putchar(c);
	ret++;
	return (ret);
}
