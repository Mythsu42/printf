/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 20:53:23 by ktolba            #+#    #+#             */
/*   Updated: 2025/06/06 16:04:20 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_puthexptr_pf(size_t nbr)
{
        char    *base;
        int             len;

        len = 0;
        base = "0123456789abcdef";
        if (nbr >= 16)
                len += ft_puthexptr_pf(nbr / 16);
        len += ft_putchar_pf(base[nbr % 16]);
        return (len);
}
