/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 19:33:21 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/24 19:35:39 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/prlib.h"
#include <locale.h>
#include <stdio.h>

int	main(void)
{
   	   printf("%05d %3d %01d\n", 1, 2, 3);
	ft_printf("%05d %3d %01d\n", 1, 2, 3);

	   printf("%3s %c\n", "Hello, World!", 42);
	ft_printf("%3s %c\n", "Hello, World!", 42);

	   printf("%S\n", L"Нерабочий Юникод");
	ft_printf("%S\n", L"Нерабочий Юникод");

	setlocale(LC_ALL, "");

	   printf("%S\n", L"Рабочий Юникод");
	ft_printf("%S\n", L"Рабочий Юникод");

	return (0);
}
