/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:18:17 by ktolba            #+#    #+#             */
/*   Updated: 2025/06/06 16:03:41 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int nb)
{
	long int	nbr;
	int			len;

	nbr = nb;
	len = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
		len++;
	}
	while (nbr > 9)
		len += ft_putnbr_pf(nbr / 10);
	len += ft_putchar_pf(nbr % 10 + '0');
	return (len);
}
