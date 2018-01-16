/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_chr_left.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:42:17 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/12 18:42:18 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../prlib.h"

int	ft_place_chr_left(unsigned int c, t_specs specs, char uni)
{
	int		count;
	int		ret;

	count = 0;
	ret = 0;
	if (uni == 'C')
		ft_print_uni(c);
	else
		ft_putchar(c);
	ret++;
	while (count < specs.width)
	{
		ft_putchar(' ');
		count++;
		ret++;
	}
	return (ret);
}
