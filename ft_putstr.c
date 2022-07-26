/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 05:40:26 by berdogan          #+#    #+#             */
/*   Updated: 2022/07/26 05:41:29 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		write (1, &str[index++], 1);
	return (str);
}
