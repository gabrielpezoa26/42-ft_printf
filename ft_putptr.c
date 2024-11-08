/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:32:06 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/11/07 23:45:27 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_hex(unsigned long n)
{
	char	*hex_digits;
	int		kopf_schmerzennn;

	kopf_schmerzennn = 0;
	hex_digits = "0123456789abcdef";
	if (n >= 16)
		kopf_schmerzennn += ft_print_hex(n / 16);
	kopf_schmerzennn += ft_putchar(hex_digits[n % 16]);
	return (kopf_schmerzennn);
}

int	ft_putptr(void *y)
{
	unsigned long	mango_loko;
	int				count;

	count = 0;
	mango_loko = (unsigned long)y; //castinggg
	count = ft_putstr("0x") + count;
	if (mango_loko == 0) //tratativa derro
	{
		count += ft_putchar('0');
	}
	else
	{
		count += ft_print_hex(mango_loko);
	}
	return (count);
}
