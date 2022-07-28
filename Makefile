# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 02:24:58 by berdogan          #+#    #+#              #
#    Updated: 2022/07/28 04:14:03 by berdogan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libtfprintf.a
CC := gcc
CFLAGS := -Wall -Werror -Wextra -c -I libft
SRCS := ft_printf.c ft_itoa_base.c ft_strlen.c ft_itoa.c ft_strlcpy.c ft_bzero.c ft_memset.c ft_calloc.c
OBJS := *.o

all: $(NAME)

$(NAME): com
	make -C libft
com: $(OBJS)
	$(CC) $(CFLAGS) $(SRCS)
	ar -rcs libftprintf.a *.o
clean:
	rm -rf *.o */**.o
fclean: clean
	rm -rf *.a */**.a
re: fclean all
