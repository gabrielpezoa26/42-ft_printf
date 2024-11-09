/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_lower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:33:48 by gabriel           #+#    #+#             */
/*   Updated: 2024/11/09 19:23:12 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_lower(unsigned long n)
{
	char	*hex_digits_lower;
	int		result;

	result = 0;
	hex_digits_lower = "0123456789abcdef";
	if (n >= 16)
		result += ft_print_hex_lower(n / 16);
	result += ft_putchar(hex_digits_lower[n % 16]);
	return (result);
}
