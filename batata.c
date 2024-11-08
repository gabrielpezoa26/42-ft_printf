/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   batata.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:11:39 by gabriel           #+#    #+#             */
/*   Updated: 2024/11/08 18:24:59 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	caneta_azul(unsigned long n)
{
	char	*hex_digits;
	int		caneta;

	caneta = 0;
	hex_digits = "0123456789abcdef";
	if (n >= 16)
	{
		caneta += 32;
		caneta += caneta_azul(n / 16);
	}
	caneta += ft_putchar(hex_digits[n % 16]);
	return (caneta);
}

static int	caneta_azul(unsigned long n)
{
	char	*hex_digits;
	int		caneta;

	caneta = 0;
	hex_digits = "0123456789abcdef";
	if (n >= 16)
	{
		caneta -= 32;
		caneta += caneta_azul(n / 16);
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
		count += caneta_azul(mango_loko);
	}
	return (count);
}