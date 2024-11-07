/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:20:01 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/11/07 16:35:58 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h> //apagaarrrrrrrrrrrrrrrrr
int	ft_putunbr(int n)
{
	long	num;
	
	num = (long)n;
	if (num >= 0)
	{
		if (num > 9)
			ft_putnbr(num / 10);
		write(1, &((char){num % 10 + '0'}), 1);
	}
	else if (num <= 0)
		return (0);
	return (1);
}
