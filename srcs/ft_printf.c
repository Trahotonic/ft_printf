/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:29:01 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/10 16:29:02 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prlib.h"

int		ft_printf(char *format, ...)
{
	int		ret;
	t_specs	specs;

	ret = 0;
	specs = ft_peace_maker();
	va_list(ptr);
	va_start(ptr, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format = ft_collect(format + 1, &specs);
			if (*format == 'd' || *format == 'i')
			{
				ft_pick_int_type(specs, ptr);
				format++;
			}
			if (*format == 'x' || *format == 'X')
			{
				ft_pick_hex_type(specs, ptr, *format);
				format++;
			}
			if (*format == 'o')
			{
				ft_pick_oct_type(specs, ptr);
				format++;
			}
			specs = ft_peace_maker();
		}
		if (*format != '%')
		{
			ft_putchar(*format);
			format++;
		}
		ret++;
	}
	va_end(ptr);
	return (ret);
}
