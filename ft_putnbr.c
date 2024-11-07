/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:11:20 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/11/07 15:09:11 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	num;
	int		k;
	
	num = (long)n;
	k = 0;
	while (num[k] != '\0')
	{
		if (num[k] < 0)
		{
			write(1, "-", 1);
			num = -num;
			k++;
		}
		if (num[k] > 9)
			ft_putnbr(num / 10);
			
		write(1, &((char){num % 10 + '0'}), 1);
		k++;
	}
}
