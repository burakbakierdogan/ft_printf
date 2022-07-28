/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 02:39:11 by berdogan          #+#    #+#             */
/*   Updated: 2022/07/28 03:25:39 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_len(unsigned long int nbr, int base)
{
	int	index;

	index = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= base;
		index++;
	}
	return (index);
}

static	void	ft_write(char *str, int len)
{
	int	index;

	index = 0;
	while (index <= len)
		write (1, &str[index++], 1);
	free (str);
}

int	ft_itoa_base(unsigned long int nbr, int base, char format)
{
	int		len;
	char	*str;
	int		ret;

	len = ft_len(nbr, base);
	ret = len;
	if (nbr == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	str = (char *) malloc ((len) * sizeof(char));
	if (!str)
		return (0);
	while (len >= 0 && nbr)
	{
		str[len] = (nbr % base) + 48;
		if (nbr % base > 9 && format == 'X')
			str[len] = ((nbr % base) - 10) + 'A';
		else if (nbr % base > 9 && format == 'x')
				str[len] = ((nbr % base) - 10) + 'a';
		len--;
		nbr /= base;
	}
	ft_write(str, ret);
	return (ret);
}

