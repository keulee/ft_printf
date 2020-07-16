# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: keulee <keulee@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/08 20:04:39 by keulee            #+#    #+#              #
#    Updated: 2020/07/10 22:51:01 by keulee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

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
		ft_itoa.c \
		ft_strdup.c \
		ft_print_u.c \
		ft_putnbr_u.c \
		ft_itoa_u.c \
		ft_print_p.c \
		ft_putnbr_base.c \
		ft_utoa_base.c \
		ft_print_x.c \
		ft_print_xx.c \
		ft_print_percent.c \
		ft_print_case.c \
		ft_find_asterisk.c \
		ft_find_precision_and_width.c \
		ft_info_str.c \
		ft_info_di.c \
		ft_info_p.c \
		ft_info_percent.c \
		ft_di_case.c \
		ft_info_u.c \
		ft_u_case.c \
		ft_info_x.c \
		ft_x_case.c \
		ft_info_xx.c \
		ft_xx_case.c \
		ft_print_double_percent.c \
		ft_print_sgl_caracter.c  

HEADER = includes
DIR_S = srcs
DIR_O = tmp

SRCS = $(addprefix ${DIR_S}/, ${SRC})

OBJS = $(addprefix ${DIR_O}/, ${SRC:.c=.o})

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
RC = rc
RM = rm -f
RMD = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(RC) $(NAME) $(OBJS)
	ranlib $(NAME)

$(DIR_O)/%.o: $(DIR_S)/%.c
	@mkdir -p tmp
	@$(CC) $(CFLAGS) -I $(HEADER) -o $@ -c $<

clean:
	$(RM) $(OBJS)
	$(RMD) $(DIR_O)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
