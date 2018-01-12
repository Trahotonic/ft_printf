/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_str_right.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 14:33:20 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/12 14:33:21 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../prlib.h"

void	ft_place_str_right(char *str, t_specs specs)
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
	count = 0;
	if (specs.acc_flag == 1)
		while (count < specs.accuracy && str[count] != '\0')
			ft_putchar(str[count++]);
	else
		ft_putstr(str);
}
