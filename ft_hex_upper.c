/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_upper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:32:07 by gabriel           #+#    #+#             */
/*   Updated: 2024/11/08 18:22:06 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

int	ft_print_hex_upper(unsigned long n)
{
	char	*hex_digits_upper;
	int		chaos_upper;

	chaos_upper = 0;
	hex_digits_upper = "0123456789ABCDEF";
	if (n >= 16)
		chaos_upper += ft_print_hex_upper(n / 16);
	chaos_upper += ft_putchar(hex_digits_upper[n % 16]);
	return (chaos_upper);
}
