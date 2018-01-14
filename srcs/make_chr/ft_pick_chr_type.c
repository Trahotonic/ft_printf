/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pick_chr_type.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:42:04 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/12 18:42:04 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../prlib.h"

void	ft_pick_chr_type(t_specs specs, va_list ptr)
{
	int	x;

	x = va_arg(ptr, int);
	if (x >= 128)
		ft_print_uni(x);
	else
		ft_print_chr(x, specs);
}
