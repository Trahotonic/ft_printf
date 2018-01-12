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

void	ft_place_chr_right(char c, t_specs specs)
{
	int	count;
	char fill;

	count = 0;
	fill = ' ';
	if (specs.zero == 1)
		fill = '0';
	while (count < specs.width)
	{
		ft_putchar(fill);
		count++;
	}
	ft_putchar(c);
}
