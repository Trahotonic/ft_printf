/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_chr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:42:48 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/12 18:42:49 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../prlib.h"

void	ft_print_chr(char c, t_specs specs)
{
	ft_equal_dis_chr(&specs);
	if (specs.leftside == 1)
		ft_place_chr_left(c, specs);
	else
		ft_place_chr_right(c, specs);
}

