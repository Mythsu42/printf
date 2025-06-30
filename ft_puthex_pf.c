/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:55:10 by ktolba            #+#    #+#             */
/*   Updated: 2025/06/06 16:02:47 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_pf(unsigned int nbr, int typecase)
{
	char	*base;
	int		len;

	len = 0;
	if (typecase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (nbr >= 16)
		len += ft_puthex_pf(nbr / 16, typecase);
	len += ft_putchar_pf(base[nbr % 16] + '0');
	return (len);
}
