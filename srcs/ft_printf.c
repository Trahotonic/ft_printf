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
			if (*format == 'd' || *format == 'D' || *format == 'i')
			{
				ret += ft_pick_int_type(specs, ptr, *format);
				format++;
			}
			if (*format == 'x' || *format == 'X')
			{
				ret += ft_pick_hex_type(specs, ptr, *format);
				format++;
			}
			if (*format == 'o' || *format == 'O')
			{
				ret += ft_pick_oct_type(specs, ptr, *format);
				format++;
			}
			if (*format == '%')
			{
				ret += ft_print_per(specs);
				format++;
			}
			if (*format == 'u' || *format == 'U')
			{
				ret += ft_pick_uns_type(specs, ptr, *format);
				format++;
			}
			if (*format == 'p')
			{
				ret += ft_print_adr(va_arg(ptr, unsigned long long), specs);
				format++;
			}
			if (*format == 's' || *format == 'S')
			{
				ret += ft_pick_str_type(specs, ptr);
				format++;
			}
			if (*format == 'c' || *format == 'C')
			{
				ret += ft_pick_chr_type(specs, ptr, *format);
				format++;
			}
			specs = ft_peace_maker();
		}
		if (*format != '%' && *format != '\0')
		{
			ft_putchar(*format);
			ret++;
			format++;
		}
	}
	va_end(ptr);
	// printf("ptr closed\n");
	return (ret);
}
