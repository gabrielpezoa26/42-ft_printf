/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:08:55 by gabriel           #+#    #+#             */
/*   Updated: 2024/11/06 12:43:39 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_verify_format(const char *id, size_t to_print, int final_count)
{
	if (*id[1] == 'c')
		ft_putchar(to_print, to_print);
	return (final_count);
}

int	ft_printf(const char *format, ...)
{	
	char	id;
	size_t	to_print;
	int		potato;

	ft_verify_format(format, to_print, potato);
	return (0);
}

int	main(void)
{
	char	potato = 'a';

	ft_printf("%c\n", potato);
	//printf("%c\n", potato);
	return (0);
}

/*	if (id == 's')
		ft_putstr();
	if (id == 'p')
		return (aaa);
	if (id == 'd')
		ft_putnbr();
	if (id == 'i')
		ft_putnbr();
	if (id == 'u')
		ft_putnbr();
	if (id == 'x')
		//dsahdsaudsa
	if (id == 'X')
		//uidagsadsa
	if (id == '%')
		ft_putchar('%');*/