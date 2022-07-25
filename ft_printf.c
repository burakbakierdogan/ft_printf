/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:32:52 by berdogan          #+#    #+#             */
/*   Updated: 2022/07/25 14:19:35 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_total(const char *src)
{
	int	index;
	int	total;

	total = 0;
	index = 0;
	while (src[index])
	{
		if (src[index] == '%' && src[index + 1] != '%')
			total++;
		index++;
	}
	return (total);
}

int	ft_write(va_list list, char c)
{
	char	chr;
	int		ret;

	if (c == 'c')
	{
		chr = va_arg(list, int);
		write (1, &chr, 1);
		ret++;
	}
	return (ret);
}

int	ft_print(const char *src, va_list list)
{
	int	index;
	int	ret;

	index = 0;
	ret = 0;
	while (src[index])
	{
		if (src[index] == '%')
		{
			ret += ft_write(list, src[index + 1]);
			index += 2;
		}
		else
		{
			write(1, &src[index++], 1);
			ret++;
		}
	}
	return (ret);
}


int	ft_printf(const char *src, ...)
{
	int		index;
	int		ret;
	va_list	list;

	index = 0;
	ret = 0;

	va_start(list, src);
	ret = ft_print(src, list);

	va_end(list);
	return (ret);
}

int main (void)
{
	char c = 'c';
	int	a = ft_printf("burak = %c %c\n", c, c);
	printf ("%d\n",a);
}


