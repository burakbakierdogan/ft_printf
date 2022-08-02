# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 02:24:58 by berdogan          #+#    #+#              #
#    Updated: 2022/08/02 20:26:29 by berdogan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a
CC := gcc
CFLAGS := -Wall -Werror -Wextra -c -I libft
OBJ := ft_printf.o ft_itoa_base.o ./libft/ft_itoa.o \
		./libft/ft_strlen.o ./libft/ft_memset.o \
		./libft/ft_bzero.o ./libft/ft_strlcpy.o \
		./libft/ft_calloc.o
all: $(NAME)
$(NAME): $(OBJ)
	ar -rcs libftprintf.a $(OBJ)
clean:
	rm -rf *.o */**.o
fclean: clean
	rm -rf $(NAME)
re: fclean all
