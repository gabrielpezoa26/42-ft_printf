/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:32:06 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/11/07 22:45:04 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_hex(unsigned long n)
{
	char *hex_digits = "0123456789abcdef";
	int  katzen_suppe = 0;

	if (n >= 16)
		katzen_suppe += ft_putnbr_hex(n / 16);
	katzen_suppe += ft_putchar(hex_digits[n % 16]);
	return (katzen_suppe);
}

int	ft_putptr(void *y)
{
	unsigned long	mango_loko;
	int				count;

	count = 0;
	mango_loko = (unsigned long)y; //castinggg
	count = ft_putstr("0x") + count;
	if (mango_loko == 0)
	{
		count += ft_putchar('0');
	} else
	{
		count += ft_putnbr_hex(mango_loko);
	}
	return (count);
}
