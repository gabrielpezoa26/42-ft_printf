/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:20:01 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/11/09 15:55:26 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	long	num;
	int		count;

	num = (long)n;
	count = 0;
	if (num > 9)
		count += ft_putunbr(num / 10);
	count += ft_putchar(num % 10 + '0');
	return (count);
}
