/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 11:56:11 by ktolba            #+#    #+#             */
/*   Updated: 2025/06/04 14:09:06 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

int	ft_printf(const char *fotmat, ...);
int	ft_dispatch_args(va_list args, const char *str);
int	ft_putchar_pf(char c);
int	ft_putstr_pf(char *str);
int	ft_putptr_pf(void *ptr);
int	ft_putnbr_pf(int nbr);
int	ft_put_unsigned_pf(unsigned int nbr);
int	ft_puthex_pf(unsigned long nbr, int typecase);
#endif
