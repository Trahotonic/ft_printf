/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_adr_left.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:53:15 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/12 13:53:15 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../prlib.h"

int	ft_place_adr_left(unsigned long long n, t_specs specs)
{
	int		count;
	int		ret;
	char	*str;

	count = 0;
	ret = 0;
	ft_putchar('0');
	ft_putchar('x');
	ret += 2;
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
	count = 0;
	while (count < specs.width)
	{
		ft_putchar(' ');
		count++;
		ret++;
	}
	return (ret);
}
