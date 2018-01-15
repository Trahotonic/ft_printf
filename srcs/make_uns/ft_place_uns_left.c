/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_uns_left.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 18:09:30 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/11 18:09:31 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../prlib.h"

int	ft_place_uns_left(unsigned long long n, t_specs specs)
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
	while (count < specs.accuracy)
	{
		ft_putchar('0');
		count++;
		ret++;
	}
	str = ft_uitoa_base(n, 10);
	ft_putstr(str);
	ret += ft_strlen(str);
	free(str);
	count = 0;
	while (count < specs.width - specs.space)
	{
		ft_putchar(' ');
		count++;
		ret++;
	}
	return (ret);
}

