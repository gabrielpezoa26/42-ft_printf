/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_lower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:33:48 by gabriel           #+#    #+#             */
/*   Updated: 2024/11/08 18:22:08 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

int	ft_print_hex_lower(unsigned long n)
{
	char	*hex_digits_lower;
	int		chaos_upper;

	chaos_upper = 0;
	hex_digits_lower = "0123456789abcdef";
	if (n >= 16)
		chaos_upper += ft_print_hex_lower(n / 16);
	chaos_upper += ft_putchar(hex_digits_lower[n % 16]);
	return (chaos_upper);
}
