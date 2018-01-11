/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:24:07 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/10 16:24:08 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../prlib.h"

char	*ft_go_zero(void)
{
	char *ret;

	ret = (char*)malloc(sizeof(char) * 2);
	ret[0] = '0';
	ret[1] = '\0';
	return (ret);
}

char	*ft_itoa_base(long long value, int base)
{
	char	*array;
	char	tmp[60];
	char	*ret;
	int		size;
	int		ptr;

	if (value == 0)
		return (ft_go_zero());
	array = "0123456789ABCDEF";
	size = 0;
	ptr = 59;
	while (value != 0)
	{
		tmp[ptr--] = array[value % base];
		value /= base;
		size++;
	}
	ptr++;
	ret = (char*)malloc(sizeof(char) * (size + 1));
	size = 0;
	while (ptr <= 59)
		ret[size++] = tmp[ptr++];
	ret[size] = '\0';
	return (ret);
}
