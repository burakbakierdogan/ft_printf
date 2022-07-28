# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 02:24:58 by berdogan          #+#    #+#              #
#    Updated: 2022/07/28 17:44:16 by berdogan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a
CC := gcc
CFLAGS := -Wall -Werror -Wextra -c -I libft
SRCS := ft_printf.c ft_itoa_base.c
OBJS := ft_printf.o ft_itoa_base.o ./libft/ft_itoa.o ./libft/ft_strlen.o ./libft/ft_memset.o ./libft/ft_bzero.o ./libft/ft_strlcpy.o ./libft/ft_calloc.o

all: $(NAME)
$(NAME): objs
	$(CC) $(CFLAGS) $(SRCS)
	ar -rcs libftprintf.a $(OBJS)
objs:
	make -C libft
clean:
	rm -rf *.o */**.o
fclean: clean
	rm -rf $(NAME) libft/libft.a
re: fclean all
