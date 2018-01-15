/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_equal_dis_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:26:01 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/10 16:26:02 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../prlib.h"

static int	ft_siz(long long n)
{
	int m;

	if (n < 0)
		n = -n;
	m = 1;
	while (n >= 10)
	{
		n /= 10;
		m++;
	}
	return (m);
}

void	ft_equal_dis_int(t_specs *specs, long long n)
{
	if (specs->leftside == 1 || specs->acc_flag == 1)
		specs->zero = 0;
	if (n < 0 && specs->plus == 1)
		specs->plus = 0;
	specs->accuracy -= ft_siz(n);
	if (specs->accuracy < 0)
		specs->accuracy = 0;
	if (!(specs->acc_flag == 1 && specs->accuracy == 0 && n == 0))
		specs->width -= (specs->accuracy + ft_siz(n) + specs->plus);
	if (n < 0)
		specs->width -= 1;
	if ((specs->plus == 1 || n < 0) && specs->space == 1)
		specs->space = 0;
}
