/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:32:52 by berdogan          #+#    #+#             */
/*   Updated: 2022/07/26 06:13:32 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


static	int	ft_write(char *src)
{
	
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
			ret += ft_write(src[index++]);
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


