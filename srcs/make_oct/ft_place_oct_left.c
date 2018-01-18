/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_oct_left.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:28:15 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/10 16:28:15 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/prlib.h"

int	ft_place_oct_left(unsigned long long n, t_specs specs)
{
	int		count;
	int		ret;
	char	*str;

	str = NULL;
	ret = 0;
	if (specs.hh == 1)
		n = (unsigned char)n;
	if (specs.h == 1)
		n = (unsigned short)n;
	count = 0;
	if (specs.hash == 1 && n != 0)
	{
		ft_putchar('0');
		ret++;
	}
	while (count < specs.accuracy)
	{
		ft_putchar('0');
		count++;
		ret++;
	}
	if (!(specs.acc_flag == 1 && specs.accuracy == 0 && n == 0))
	{
		str = ft_itoa_base(n, 8);
		ft_putstr(str);
		ret += ft_strlen(str);
		free(str);
	}
	count = 0;
	while (count < specs.width)
	{
		ft_putchar(' ');
		count++;
		ret++;
	}
	return (ret);
}
