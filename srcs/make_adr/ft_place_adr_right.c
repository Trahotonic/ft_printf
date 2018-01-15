/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_adr_right.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:53:29 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/12 13:53:30 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../prlib.h"

int	ft_place_adr_right(unsigned long long n, t_specs specs)
{
	int 	count;
	char	fill;
	int		ret;
	char	*str;

	count = 0;
	ret = 0;
	str = NULL;
	fill = ' ';
	if (specs.zero == 1)
		fill = '0';
	if (fill == '0')
	{
		ft_putchar('0');
		ft_putchar('x');
		ret += 2;
	}
	while (count < specs.width)
	{
		ft_putchar(fill);
		count++;
		ret++;
	}
	count = 0;
	if (specs.zero != 1)
	{
		ft_putchar('0');
		ft_putchar('x');
		ret += 2;
	}
	while (count < specs.accuracy)
	{
		ft_putchar('0');
		count++;
		ret++;
	}
	str = ft_uitoa_base(n, 16);
	ret += ft_strlen(str);
	ft_putstr(ft_allow(str));
	free(str);
	return (ret);
}
