/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_upper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:32:07 by gabriel           #+#    #+#             */
/*   Updated: 2024/11/11 13:54:38 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_upper(unsigned long n)
{
	char	*hex_digits_upper;
	int		char_count;

	char_count = 0;
	hex_digits_upper = "0123456789ABCDEF";
	if (n >= 16)
		char_count += ft_print_hex_upper(n / 16);
	char_count += ft_putchar(hex_digits_upper[n % 16]);
	return (char_count);
}
