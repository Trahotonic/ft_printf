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

#include "../includes/prlib.h"

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

static void			ft_put_inval_width(int width, int zero)
{
	int		n;
	char	fill;

	n = 0;
	fill = ' ';
	if (zero == 1)
		fill = '0';
	while (n < width - 1)
	{
		write(1, &fill, 1);
		n++;
	}
}

static int			ft_check_valid_sp(char c)
{
	if (c == '%' || c == 'd' || c == 'D' || c == 'i' || c == 'x' || c == 'X' ||
		c == 'o' || c == 'O' || c == 'u' || c == 'U' || c == 'p' || c == 's' ||
		c == 'S' || c == 'c' || c == 'C')
		return (1);
	return (0);
}

static int			ft_pick_func(char c, t_specs specs, va_list ptr)
{
	if (c == '%')
		return (ft_print_per(specs));
	else if (c == 'd' || c == 'D' || c == 'i')
		return (ft_pick_int_type(specs, ptr, c));
	else if (c == 'x' || c == 'X')
		return (ft_pick_hex_type(specs, ptr, c));
	else if (c == 'o' || c == 'O')
		return (ft_pick_oct_type(specs, ptr, c));
	else if (c == 'u' || c == 'U')
		return (ft_pick_uns_type(specs, ptr, c));
	else if (c == 'p')
		return (ft_print_adr(va_arg(ptr, unsigned long long), specs));
	else if (c == 's' || c == 'S')
		return (ft_pick_str_type(specs, ptr, c));
	else if (c == 'c' || c == 'C')
		return (ft_pick_chr_type(specs, ptr, c));
	return (0);
}

static int ft_for_inval_wid(char *format, t_specs specs, int ret)
{
	if (specs.width > 1 && specs.leftside == 0)
		ft_put_inval_width(specs.width, specs.zero);
	write(1, &*format, 1);
	if (specs.width > 1 && specs.leftside == 1)
		ft_put_inval_width(specs.width, specs.zero);
	ret += 1;
	if (specs.width > 0)
		ret += specs.width - 1;
	return (ret);
}

static char	*ft_do_inval(char *format, int *ret, int *flag, t_specs specs)
{
	*flag = 1;
	if (*format != '\0')
	{
		*ret = ft_for_inval_wid(format, specs, *ret);
		format++;
	}
	specs = ft_peace_maker();
	return (format);
}

static char *ft_lil_shit(char *format, int *ret, int flag)
{
	if (*format != '%' && *format != '\0' && flag == 0)
	{
		write(1, &*format, 1);
		*ret += 1;
		format++;
	}
	return (format);
}

static void	*ft_for_valid(char *format, int *ret, t_specs specs, va_list ptr)
{
	*ret += ft_pick_func(*format, specs, ptr);
	format++;
	specs = ft_peace_maker();
	return (format);
}

int		ft_printf(char *format, ...)
{
	int		ret;
	int		flag;
	t_specs	specs;

	ret = 0;
	specs = ft_peace_maker();
	va_list(ptr);
	va_start(ptr, format);
	while (*format != '\0')
	{
		flag = 0;
		if (ft_check_SC(format))
			break ;
		if (*format == '%')
		{
			format = ft_collect(format + 1, &specs, ptr);
			if (ft_check_valid_sp(*format))
				format = ft_for_valid(format, &ret, specs, ptr);
			else
				format = ft_do_inval(format, &ret, &flag, specs);
		}
		format = ft_lil_shit(format, &ret, flag);
	}
	va_end(ptr);
	return (ret);
}
