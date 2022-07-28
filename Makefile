# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 02:24:58 by berdogan          #+#    #+#              #
#    Updated: 2022/07/28 03:00:47 by berdogan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprinf.a
CC := gcc
CFLAGS := -Wall -Werror -Wextra -c -I libft
SRCS := ft_printf.c ft_itoa_base.c
LSRCS := ./libft

all: $(NAME)

$(NAME): libft
	$(CC) $(CFLAGS) $(SRCS)
	ar -rcs $(NAME) */**.o
libft: $(SRCS)
	make -C ./libft
clean:
	rm -rf */**.o
fclean: clean
	rm -rf */**.a
re: fclean all
