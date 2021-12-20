# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aessabir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 17:51:19 by aessabir          #+#    #+#              #
#    Updated: 2021/11/25 11:38:54 by aessabir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c \
	   ft_putchar.c \
	   ft_putstr.c \
	   ft_unsigned.c \
	   ft_putadd.c \
	   ft_putnbr.c \
	   ft_strlen.c \
	   ft_hexa.c \
	   ft_itoa.c
OBJ = ${SRCS:.c=.o}
NAME = libftprintf.a

all : ${NAME}

${NAME} : ${OBJ}
	ar rc ${NAME} ${OBJ}

clean : 
	rm -f ${OBJ}

fclean : clean 
	rm -f ${NAME}

re : fclean all
