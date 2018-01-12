/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_str_left.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 14:33:06 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/12 14:33:07 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../prlib.h"

void	ft_place_str_left(char *str, t_specs specs)
{
	int	count;

	count = 0;
	if (specs.acc_flag == 1)
	{
		while (count < specs.accuracy && str[count] != '\0')
			ft_putchar(str[count++]);
		count = 0;
	}
	else
		ft_putstr(str);
	if(specs.acc_flag != 1)
		while (count < specs.width)
			ft_putchar(' ');
}
