/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 04:08:02 by ktolba            #+#    #+#             */
/*   Updated: 2025/07/11 04:11:21 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexptr_pf(size_t nbr)
{
	char	*base;
	int		len;

	len = 0;
	base = "0123456789abcdef";
	if (nbr >= 16)
		len += ft_puthexptr_pf(nbr / 16);
	len += ft_putchar_pf(base[nbr % 16]);
	return (len);
}
