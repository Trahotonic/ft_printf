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

static int		ft_check_SC(char *format)
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
		if (ft_check_SC(format))
			break ;
		if (*format == '%')
		{
			format = ft_collect(format + 1, &specs);
			if (*format == '%')
			{
				ret += ft_print_per(specs);
				format++;
			}
			else if (*format == 'd' || *format == 'D' || *format == 'i')
			{
				ret += ft_pick_int_type(specs, ptr, *format);
				format++;
			}
			else if (*format == 'x' || *format == 'X')
			{
				ret += ft_pick_hex_type(specs, ptr, *format);
				format++;
			}
			else if (*format == 'o' || *format == 'O')
			{
				ret += ft_pick_oct_type(specs, ptr, *format);
				format++;
			}
			else if (*format == 'u' || *format == 'U')
			{
				ret += ft_pick_uns_type(specs, ptr, *format);
				format++;
			}
			else if (*format == 'p')
			{
				ret += ft_print_adr(va_arg(ptr, unsigned long long), specs);
				format++;
			}
			else if (*format == 's' || *format == 'S')
			{
				ret += ft_pick_str_type(specs, ptr, *format);
				format++;
			}
			else if (*format == 'c' || *format == 'C')
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
