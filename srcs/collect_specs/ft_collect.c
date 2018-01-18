/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collect.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:25:45 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/10 16:25:47 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/prlib.h"

char	*ft_collect(char *format, t_specs *specs)
{
	while (*format != '\0' && *format != 'd' && *format != 'c'
		&& *format != 's' && *format != 'x' && *format != 'X'
		&& *format != 'o' && *format != 'i' && *format != '%'
		&& *format != 'u')
	{
		if (ft_check_invalid(format))
			return (format);
		if (*format == '-' && specs->leftside == 0)
			specs->leftside = 1;
		if (isdigit(*format))
			format = ft_get_width(format, specs);
		if (*format == '.')
			format = ft_check_acc(format, specs);
		if (*format == '+')
			specs->plus = 1;
		if (*format == ' ')
			specs->space = 1;
		if (*format == '#')
			specs->hash = 1;
		if (*format == 'l')
		{
			specs->l = 1;
			format++;
			if (*format == 'l')
			{
				specs->ll = 1;
				specs->l = 0;
			}
			format--;
		}
		if (*format == 'h')
		{
			specs->h = 1;
			specs->hh = 0;
			format++;
			if (*format == 'h')
			{
				specs->hh = 1;
				specs->h = 0;
				format ++;
			}
			format--;
		}
		if (*format == 'z')
			specs->z = 1;
		if (*format == 'j')
			specs->j = 1;

		format++;
	}
	return (format);
}
