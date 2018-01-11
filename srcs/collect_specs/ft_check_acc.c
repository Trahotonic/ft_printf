/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_acc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:25:19 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/10 16:25:19 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../prlib.h"

char	*ft_check_acc(char *format, t_specs *specs)
{
	int		acc;

	specs->acc_flag = 1;
	format += 1;
	acc = 0;
	if (isdigit(*format))
	{
		acc = ft_smoker_atoi(format);
		specs->accuracy = acc;
		while (isdigit(*format))
			format++;
		format -= 1;
		return (format);
	}
	format -= 1;
	return (format);
}
