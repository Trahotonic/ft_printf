/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 12:47:31 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/19 12:47:31 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/prlib.h"

int	ft_check_sc(char *format)
{
	while (*format != '\0' && MB_CUR_MAX == 1)
	{
		if (*format == '%')
		{
			format++;
			while (!ft_check_invalid(format))
				format++;
			if (*format == 'C' || *format == 'S')
				return (1);
			else
				return (0);
		}
		format++;
	}
	return (0);
}
