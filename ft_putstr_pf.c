/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:13:59 by ktolba            #+#    #+#             */
/*   Updated: 2025/06/06 16:03:02 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_pf(char *str)
{
	size_t	len;

	len = 0;
	if (!str)
		return (ft_putstr_pf("(null)"));
	while (str[len])
		len += ft_putchar_pf(str[len]);
	return (len);
}
