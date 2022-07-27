/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:32:52 by berdogan          #+#    #+#             */
/*   Updated: 2022/07/28 01:19:30 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_putchar(int c)
{
	if (!c)
		return (0);
	write(1, &c, 1);
	return (1);
}

static	int	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		write (1, &str[index++], 1);
	return (str);
}

static	int	ft_write(char *src, va_list list)
{
	int	ret;

	ret = 0;
	if (src[1] == 'c')
		ret = ft_putchar(va_arg(list, int));
	else if (src[1] == 'd')
		ret = ft_putstr(ft_itoa(va_arg(list, int)));
	else if (src[1] == 's')
		ret = ft_putstr(var_arg(list, *char);
	else if (src[1] == 'p')
		ret = ft_itoa_base(va_arg(list, *void)), 16, 'X');
	else if (src[1] == 'i')
		ret = ft_itoa_base(va_arg(list, unsigned int), 10, 'x');
	else if (src[1] == 'u')
		ret = ft_itoa_base(va_arg(list, unsigned int), 10, 'x');
	else if (src[1] == 'x')
		ret = ft_itoa_base(va_arg(list, unsigned int), 16, 'x');
	else if (src[1] == 'X')
		ret = ft_itoa_base(va_arg(list, unsigned int), 16, 'X');
	else if (src[1] == '%')
		ret = ft_putstr("%");
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
	while (src[index])
	{
		if (src[index] == '%')
		{
			ret += ft_write(src[index++], list);
			index++;
		}
		else
			write (1, src[index++], 1);
	}
	va_end(list);
	return (index + ret);
}

int main (void)
{
	char c = 'c';
	char *str;
	int	a = ft_printf("burak = %c %c\n", str, c);
	printf ("%d\n",a);
}


