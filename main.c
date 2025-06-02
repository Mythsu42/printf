/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 21:49:54 by ktolba            #+#    #+#             */
/*   Updated: 2025/06/02 21:50:24 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	len_std, len_ft;
	int	nb = -42;
	unsigned int	unb = 4294967295;
	char *str = "Hello";
	char *null_str = NULL;
	void *ptr = &nb;

	// 1. Simple string
	len_std = printf("Hello World!\n");
	len_ft  = ft_printf("Hello World!\n");
	printf("STD: %d | FT: %d\n\n", len_std, len_ft);

	// 2. Char
	len_std = printf("Char: %c\n", 'A');
	len_ft  = ft_printf("Char: %c\n", 'A');
	printf("STD: %d | FT: %d\n\n", len_std, len_ft);

	// 3. String
	len_std = printf("Str: %s\n", str);
	len_ft  = ft_printf("Str: %s\n", str);
	printf("STD: %d | FT: %d\n\n", len_std, len_ft);

	// 4. NULL string
	len_std = printf("Null str: %s\n", null_str);
	len_ft  = ft_printf("Null str: %s\n", null_str);
	printf("STD: %d | FT: %d\n\n", len_std, len_ft);

	// 5. Int (d)
	len_std = printf("Int: %d\n", nb);
	len_ft  = ft_printf("Int: %d\n", nb);
	printf("STD: %d | FT: %d\n\n", len_std, len_ft);

	// 6. Int (i)
	len_std = printf("Int i: %i\n", nb);
	len_ft  = ft_printf("Int i: %i\n", nb);
	printf("STD: %d | FT: %d\n\n", len_std, len_ft);

	// 7. Unsigned
	len_std = printf("Unsigned: %u\n", unb);
	len_ft  = ft_printf("Unsigned: %u\n", unb);
	printf("STD: %d | FT: %d\n\n", len_std, len_ft);

	// 8. Hex lower
	len_std = printf("Hex x: %x\n", unb);
	len_ft  = ft_printf("Hex x: %x\n", unb);
	printf("STD: %d | FT: %d\n\n", len_std, len_ft);

	// 9. Hex upper
	len_std = printf("Hex X: %X\n", unb);
	len_ft  = ft_printf("Hex X: %X\n", unb);
	printf("STD: %d | FT: %d\n\n", len_std, len_ft);

	// 10. Pointer
	len_std = printf("Ptr: %p\n", ptr);
	len_ft  = ft_printf("Ptr: %p\n", ptr);
	printf("STD: %d | FT: %d\n\n", len_std, len_ft);

	// 11. NULL pointer
	len_std = printf("NULL ptr: %p\n", NULL);
	len_ft  = ft_printf("NULL ptr: %p\n", NULL);
	printf("STD: %d | FT: %d\n\n", len_std, len_ft);

	// 12. Percent
	len_std = printf("Percent: %%\n");
	len_ft  = ft_printf("Percent: %%\n");
	printf("STD: %d | FT: %d\n\n", len_std, len_ft);

	// 13. Mix
	len_std = printf("Mix: %c %s %d %x %p %%\n", 'Z', str, 42, 42, ptr);
	len_ft  = ft_printf("Mix: %c %s %d %x %p %%\n", 'Z', str, 42, 42, ptr);
	printf("STD: %d | FT: %d\n\n", len_std, len_ft);

	return (0);
}
