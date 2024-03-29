/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:06:12 by berdogan          #+#    #+#             */
/*   Updated: 2022/08/02 16:35:22 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<unistd.h>
# include<stdarg.h>
# include<stdlib.h>
# include<limits.h>
# include<stdio.h>

int	ft_printf(const char *src, ...);
int	ft_itoa_base(unsigned long long int nbr, int base, char format);
#endif
