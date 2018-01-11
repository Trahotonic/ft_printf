/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prlib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:05:49 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/10 16:05:50 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRLIB_H
# define PRLIB_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <ctype.h>

typedef struct	s_specs
{
	int		plus;
	int		leftside;
	int		width;
	int		zero;
	int		count;
	int		accuracy;
	int		space;
	int		digit_flag;
	int		acc_flag;
	int		hash;
	int		l;
	int		ll;
	int		h;
	int		hh;
	int		z;
	int		L;
	int		j;
}				t_specs;

char			*ft_itoa(long long n);
char			*ft_allow(char *str);
size_t			ft_strlen(char *str);
char			*ft_go_zero(void);
char			*ft_itoa_base(long long value, int base);
char			*ft_uitoa_base(unsigned long long value, int base);
void			ft_putchar(char c);
void			ft_putstr(char const *s);
int				ft_smoker_atoi(const char *nptr);
t_specs			ft_peace_maker(void);
char			*ft_get_width(char *format, t_specs *specs);
char			*ft_check_acc(char *format, t_specs *specs);
int				ft_check_invalid(char *format);
char			*ft_collect(char *format, t_specs *specs);
void			ft_pick_int_type(t_specs specs, va_list ptr);
void			ft_pick_oct_type(t_specs specs, va_list ptr);
void			ft_pick_hex_type(t_specs specs, va_list ptr, char x);
void			ft_equal_dis_int(t_specs *specs, long long n);
void			ft_place_int_left(long long n, t_specs specs);
void			ft_place_int_right(long long n, t_specs specs);
void			ft_print_int(long long n, t_specs specs);
void			ft_equal_dis_hex(t_specs *specs, unsigned long long n);
void			ft_place_hex_left(unsigned long long n, t_specs specs, char x);
void			ft_place_hex_right(unsigned long long n, t_specs specs, char x);
void			ft_print_hex(unsigned long long n, t_specs specs, char x);
void			ft_equal_dis_oct(t_specs *specs, unsigned long long n);
void			ft_place_oct_left(unsigned long long n, t_specs specs);
void			ft_place_oct_right(unsigned long long n, t_specs specs);
void			ft_print_oct(unsigned long long n, t_specs specs);
void			ft_equal_dis_uns(t_specs *specs, unsigned long long n);
void			ft_pick_uns_type(t_specs specs, va_list ptr);
void			ft_place_uns_left(unsigned long long n, t_specs specs);
void			ft_place_uns_right(unsigned long long n, t_specs specs);
void			ft_print_uns(unsigned long long n, t_specs specs);
int				ft_printf(char *format, ...);

#endif
