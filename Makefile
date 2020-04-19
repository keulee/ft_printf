# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: keulee <keulee@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/08 20:04:39 by keulee            #+#    #+#              #
#    Updated: 2020/03/08 20:08:29 by keulee           ###   ########.fr        #
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
		ft_itoa.c \
		ft_atoi.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_strlen.c \
		ft_strdup.c

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
