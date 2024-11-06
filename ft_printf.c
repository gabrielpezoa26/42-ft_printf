/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:08:55 by gabriel           #+#    #+#             */
/*   Updated: 2024/11/05 19:33:16 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_verify_format(const char identifier)
{
	char	identifier;

	if (identifier == 'c')
		ft_putchar_fd();
	// if (identifier == 's')
	// 	ft_putstr_fd();
	// if (identifier == 'p')
	// 	return (aaa);
	// if (identifier == 'd')
	// 	ft_putnbr_fd();
	// if (identifier == 'i')
	// 	ft_putnbr_fd();
	// if (identifier == 'u')
	// 	ft_putnbr_fd();
	// if (identifier == 'x')
	// 	//dsahdsaudsa
	// if (identifier == 'X')
	// 	//uidagsadsa
	// if (identifier == '%')
	// 	ft_putchar_fd('%');
}

int	ft_printf(const char *format, ...)
{
	
}