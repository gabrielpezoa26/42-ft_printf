/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:32:06 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/11/09 00:11:13 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	caneta_azul(unsigned long n)
{
	char	*hex_digits_lower;
	int		kopf_schmerzennn;

	kopf_schmerzennn = 0;
	hex_digits_lower = "0123456789abcdef";
	if (n >= 16)
		kopf_schmerzennn += caneta_azul(n / 16);
	kopf_schmerzennn += ft_putchar(hex_digits_lower[n % 16]);
	return (kopf_schmerzennn);
}

int	ft_putptr(void *y)
{
	int				count;

	if (y == 0)
		return (ft_putstr("0x0"));
	count = ft_putstr("0x");
	count += caneta_azul((unsigned long)y);
	return (count);
}
