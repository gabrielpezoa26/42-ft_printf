/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:32:06 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/11/09 19:01:19 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_hexlower(unsigned long n)
{
	char	*hex_digits_lower;
	int		result;

	result = 0;
	hex_digits_lower = "0123456789abcdef";
	if (n >= 16)
		result += ft_print_hexlower(n / 16);
	result += ft_putchar(hex_digits_lower[n % 16]);
	return (result);
}

int	ft_putptr(void *y)
{
	int	count;

	if (y == 0)
        return (ft_putstr("(nil)"));
	count = ft_putstr("0x");
	count += ft_print_hexlower((unsigned long)y);
	return (count);
}
