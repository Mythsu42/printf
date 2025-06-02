/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 20:53:23 by ktolba            #+#    #+#             */
/*   Updated: 2025/06/02 21:36:29 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putptr_pf(void *ptr)
{
	unsigned long	address;
	int				len;

	len = 0;
	address = (unsigned long)ptr;
	len += ft_putstr_pf("0x");
	if (address == 0)
		len += ft_putchar_pf('0');
	else
		len += ft_puthex_pf(address, 0);
	return (len);
}
