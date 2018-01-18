/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_hex_right.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:27:21 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/10 16:27:22 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/prlib.h"

int	ft_place_hex_right(unsigned long long n, t_specs specs, char x)
{
	int 	count;
	char	fill;
	int		ret;
	char	*str;

	ret = 0;
	str = NULL;
	if (specs.hh == 1)
		n = (unsigned char)n;
	if (specs.h == 1)
		n = (unsigned short)n;
	count = 0;
	fill = ' ';
	if (specs.zero == 1)
		fill = '0';
	if (fill == '0' && specs.hash == 1)
	{
		ft_putchar('0');
		ft_putchar(x);
		ret += 2;
	}
	while (count < specs.width)
	{
		ft_putchar(fill);
		count++;
		ret++;
	}
	count = 0;
	if (fill != '0' && specs.hash == 1)
	{
		ft_putchar('0');
		ft_putchar(x);
		ret += 2;
	}
	while (count < specs.accuracy)
	{
		ft_putchar('0');
		count++;
		ret++;
	}
	if (!(specs.acc_flag == 1 && specs.accuracy == 0 && n == 0))
	{
		str = ft_uitoa_base(n, 16);
		ret += ft_strlen(str);
		if (x == 'x')
			ft_putstr(ft_allow(str));
		else
			ft_putstr(str);
		free(str);
	}
	return (ret);
}
