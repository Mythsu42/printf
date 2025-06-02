/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:18:17 by ktolba            #+#    #+#             */
/*   Updated: 2025/06/02 21:38:13 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr_pf(int nbr)
{
	long int	nbr;
	int			len;

	nbr = nb;
	len = 0;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr *= -1;
		len++;
	}
	while (nbr > 9)
		len += ft_putnbr_pf(nbr / 10);
	len += ft_putchar_pf(nbr % 10 + '0');
	return (len);
}
