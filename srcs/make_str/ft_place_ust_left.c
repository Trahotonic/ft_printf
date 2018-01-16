/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_ust_left.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 18:43:33 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/16 18:43:34 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../prlib.h"

int	ft_place_ust_left(wchar_t *str, t_specs specs)
{
	int	count;
	int	ret;

	ret = 0;
	if (str == NULL)
		str = "(null)";
	count = 0;
	ft_print_unistr(str);
	ret += ft_strlen(str);
	while (count < specs.width)
	{
		ft_putchar(' ');
		count++;
		ret++;
	}
	return (ret);
}
