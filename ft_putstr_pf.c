/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:13:59 by ktolba            #+#    #+#             */
/*   Updated: 2025/06/02 21:49:18 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putstr_fd(char *str)
{
	size_t	len;

	len = 0;
	if (!str)
		return (ft_putstr_fd("(null)"));
	while (str[len])
	{
		ft_putchar(str[len]);
		len++;
	}
	return (len);
}
