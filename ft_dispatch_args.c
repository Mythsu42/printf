/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dispatch_args.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 17:06:06 by ktolba            #+#    #+#             */
/*   Updated: 2025/06/06 16:03:15 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dispatch_args(va_list args,const char *str)
{
	if (*str == 'c')
		return (ft_putchar_pf(va_arg(args, int)));
	if (*str == 's')
		return (ft_putstr_pf(va_arg(args, char *)));
	if (*str == 'd' || *str == 'i')
		return (ft_putnbr_pf(va_arg(args, int)));
	if (*str == 'u')
		return (ft_put_unsigned_pf(va_arg(args, unsigned int)));
	if (*str == 'x')
		return (ft_puthex_pf(va_arg(args, unsigned long), 0));
	if (*str == 'X')
		return (ft_puthex_pf(va_arg(args, unsigned long), 1));
	if (*str == 'p')
		return (ft_putptr_pf(va_arg(args, void *)));
	if (*str == '%')
		return (ft_putchar_pf('%'));
	return (0);
}
