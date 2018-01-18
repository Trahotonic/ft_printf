/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_uns_right.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 18:09:40 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/11 18:09:41 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/prlib.h"

int	ft_place_uns_right(unsigned long long n, t_specs specs)
{
	int		count;
	char	fill;
	char	*str;
	int		ret;

	str = NULL;
	ret = 0;
	if (specs.hh == 1)
		n = (unsigned char)n;
	if (specs.h == 1)
		n = (unsigned short)n;
	count = 0;
	fill = ' ';
	if (specs.zero == 1)
		fill = '0';
	while (count < specs.width - specs.space)
	{
		ft_putchar(fill);
		count++;
		ret++;
	}
	count = 0;
	while (count < specs.accuracy)
	{
		ft_putchar('0');
		count++;
		ret++;
	}
	if (!(specs.acc_flag == 1 && specs.accuracy == 0 && n == 0))
	{
		str = ft_uitoa_base(n, 10);
		ft_putstr(str);
		ret += ft_strlen(str);
		free(str);
	}
	return (ret);
}
