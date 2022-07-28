/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:32:52 by berdogan          #+#    #+#             */
/*   Updated: 2022/07/28 18:18:24 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static	int	ft_putchar(int c)
{
	if (!c)
		return (0);
	write(1, &c, 1);
	return (1);
}

static	int	ft_putstr(char const *str)
{
	int	index;

	index = 0;
	while (str[index])
		write (1, &str[index++], 1);
	return (index);
}

int	ft_adress(va_list list)
{
	int	ret;

	ret = 2;
	write(1, "0x", 2);
	ret += ft_itoa_base(((unsigned long long int) va_arg(list, void *)), 16, 'x');
	return (ret);
}

static	int	ft_write(char const *src, va_list list)
{
	int	ret;
	char *str;

	ret = 0;
	if (src[1] == 'c')
		ret = ft_putchar(va_arg(list, int));
	else if (src[1] == 'd')
	{
		str = ft_itoa(va_arg(list, int));
			ret = ft_putstr(str);
			free (str);
	}
	else if (src[1] == 's')
		ret = ft_putstr(va_arg(list, char *));
	else if (src[1] == 'p')
		ret = ft_adress(list);
	else if (src[1] == 'i')
	{
			str = ft_itoa(va_arg(list, int));
			ret = ft_putstr(str);
			free (str);
	}
	else if (src[1] == 'u')
		ret = ft_itoa_base(va_arg(list, unsigned long long int), 10, 'x');
	else if (src[1] == 'x')
		ret = ft_itoa_base(va_arg(list, unsigned long long int), 16, 'x');
	else if (src[1] == 'X')
		ret = ft_itoa_base(va_arg(list, unsigned long long int), 16, 'X');
	else if (src[1] == '%')
		ret = ft_putstr("%");
	return (ret);
}

int	ft_printf(const char *src, ...)
{
	int		index;
	int		ret;
	va_list	list;
	int		total;

	index = 0;
	ret = 0;
	total = 0;
	va_start(list, src);
	while (src[index])
	{
		if (src[index] == '%')
		{
			ret += ft_write((src + index++), list);
			index++;
		}
		else
		{
			write (1, &src[index++], 1);
			total++;
		}
	}
	va_end(list);
	return (total + ret);
}
