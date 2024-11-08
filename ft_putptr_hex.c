/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:26:56 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/11/08 10:30:14 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_hex_uppercase(unsigned long n)
{
	char	*hex_digits;
	int		caneta;

	caneta = 0;
	hex_digits = "0123456789abcdef";
	if (n >= 16)
	{
		caneta += 32;
		caneta += ft_print_hex_uppercase(n / 16);
	}
	caneta += ft_putchar(hex_digits[n % 16]);
	return (caneta);
}

static int	ft_print_hex_uppercase(unsigned long n)
{
	char	*hex_digits;
	int		caneta;

	caneta = 0;
	hex_digits = "0123456789abcdef";
	if (n >= 16)
	{
		caneta -= 32;
		caneta += ft_print_hex_uppercase(n / 16);
	}
	caneta += ft_putchar(hex_digits[n % 16]);
	return (caneta);
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
		count += ft_print_hex_uppercase(mango_loko);
	}
	return (count);
}
