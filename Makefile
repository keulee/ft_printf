# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: keulee <keulee@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/08 20:04:39 by keulee            #+#    #+#              #
#    Updated: 2020/05/26 17:40:52 by keulee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

INCLUDE = ./

AR = ar

RC = rc

RM = rm -f

SRC = ft_putnbr.c \
		ft_atoi.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_strlen.c \
		ft_printf.c \
		ft_find_option.c \
		ft_init.c \
		ft_option_clear.c \
		ft_print_char.c \
		ft_find_specifier.c \
		ft_print_str.c \
		ft_print_di.c \
		ft_putnbr.c \
		ft_itoa.c \
		ft_strdup.c \
		ft_print_u.c \
		ft_putnbr_u.c \
		ft_itoa_u.c \
		ft_print_p.c \
		ft_putnbr_base.c \
		ft_itoa_p.c

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC) -I $(INCLUDE)
	$(AR) $(RC) $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
