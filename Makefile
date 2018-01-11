# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/10 16:44:06 by rkyslyy           #+#    #+#              #
#    Updated: 2018/01/10 16:44:08 by rkyslyy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

HEADER = ./srcs/prlib.h

OPTIONS = -c -I $(HEADER)

SOURCES = ./srcs/convert/ft_allow.c ./srcs/convert/ft_itoa.c ./srcs/strings/ft_strlen.c ./srcs/convert/ft_itoa_base.c ./srcs/strings/ft_putchar.c ./srcs/strings/ft_putstr.c ./srcs/convert/ft_smoker_atoi.c ./srcs/collect_specs/ft_peace_maker.c ./srcs/collect_specs/ft_get_width.c \
			./srcs/collect_specs/ft_check_acc.c ./srcs/collect_specs/ft_check_invalid.c ./srcs/collect_specs/ft_collect.c ./srcs/make_int/ft_equal_dis_int.c ./srcs/make_int/ft_place_int_left.c ./srcs/make_int/ft_place_int_right.c ./srcs/make_int/ft_print_int.c \
			./srcs/make_hex/ft_equal_dis_hex.c ./srcs/make_hex/ft_place_hex_left.c ./srcs/make_hex/ft_place_hex_right.c ./srcs/make_hex/ft_print_hex.c ./srcs/make_oct/ft_equal_dis_oct.c ./srcs/make_oct/ft_place_oct_left.c ./srcs/make_oct/ft_place_oct_right.c \
			./srcs/make_oct/ft_print_oct.c ./srcs/make_int/ft_pick_int_type.c ./srcs/make_oct/ft_pick_oct_type.c ./srcs/make_hex/ft_pick_hex_type.c ./srcs/ft_printf.c

OBJECTS = ./ft_allow.o ./ft_itoa.o ./ft_strlen.o ./ft_itoa_base.o ./ft_putchar.o ./ft_putstr.o ./ft_smoker_atoi.o ./ft_peace_maker.o ./ft_get_width.o \
			./ft_check_acc.o ./ft_check_invalid.o ./ft_collect.o ./ft_equal_dis_int.o ./ft_place_int_left.o ./ft_place_int_right.o ./ft_print_int.o \
			./ft_equal_dis_hex.o ./ft_place_hex_left.o ./ft_place_hex_right.o ./ft_print_hex.o ./ft_equal_dis_oct.o ./ft_place_oct_left.o ./ft_place_oct_right.o \
			./ft_print_oct.o ./ft_pick_int_type.o ./ft_pick_oct_type.o ./ft_pick_hex_type.o ./ft_printf.o

all: $(NAME)

$(NAME):
				@ gcc $(FLAGS) $(OPTIONS) $(SOURCES)
				@ ar rc $(NAME) $(OBJECTS)
				@ ranlib $(NAME)
				@ /bin/rm -f $(OBJECTS)
clean:
				@ /bin/rm -f $(OBJECTS)

fclean:	clean
				@ /bin/rm -f $(NAME)

re: fclean all

