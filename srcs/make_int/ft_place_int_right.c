/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_int_right.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:26:22 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/10 16:26:23 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../prlib.h"

int	ft_place_int_right(long long n, t_specs specs)
{
	int		count;
	char	fill;
	int		ret;
	char	*str;

	ret = 0;
	str = NULL;
	if(specs.hh == 1)
		n = (signed char)n;
	if (specs.h == 1)
		n = (short)n;
	count = 0;
	fill = ' ';
	if (specs.zero == 1)
		fill = '0';
	if (specs.space == 1)
	{
		ft_putchar(' ');
		ret++;
	}
	if (n < 0 && fill == '0')
	{
		ft_putchar('-');
		ret++;
	}
	if (n >= 0 && specs.plus == 1 && fill == '0' &&
		!(specs.acc_flag == 1 && specs.accuracy == 0 && n == 0))
	{
		ft_putchar('+');
		ret++;
	}
	while (count < specs.width - specs.space)
	{
		ft_putchar(fill);
		count++;
		ret++;
	}
	if (n < 0 && fill != '0')
	{
		ft_putchar('-');
		ret++;
	}
	if (n >= 0 && specs.plus == 1 && fill != '0' &&
		!(specs.acc_flag == 1 && specs.accuracy == 0 && n == 0))
	{
		ft_putchar('+');
		ret++;
	}
	count = 0;
	while (count < specs.accuracy)
	{
		ft_putchar('0');
		count++;
		ret++;
	}
	if (n < 0)
		n = -n;
	if (!(specs.acc_flag == 1 && specs.accuracy == 0 && n == 0))
	{
		str = ft_itoa_base(n, 10);
		ft_putstr(str);
		ret += ft_strlen(str);
		free(str);
	}
	return (ret);
}
