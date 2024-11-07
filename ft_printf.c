/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:08:55 by gabriel           #+#    #+#             */
/*   Updated: 2024/11/06 23:12:54 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static size_t	ft_verify_type(const char x, va_list beans)
{
	size_t	kartoffel;

	kartoffel = 0;
	if (x == 'c')
		kartoffel += ft_putchar(va_arg(beans, int));
	if (x == 's')
		kartoffel += ft_putstr(va_arg(beans, char *));
	else if (x == '%')
		kartoffel += ft_putchar('%');
	return (kartoffel);
}

int	ft_printf(const char *mango_loko, ...)
{
	char	*potato;
	va_list	beans;
	size_t i;
	size_t	arg_counter;
	
	potato = "cspdiuxXs%";
	i = 0;
	arg_counter = 0;
	va_start(beans, mango_loko);
	while(mango_loko[i] != '\0')
	{
		if ((mango_loko[i] == '%') && ft_strchr(potato, mango_loko[i + 1]))
		{
			arg_counter += ft_verify_type(mango_loko[i + 1], beans);
			i++;
		}
		else
			arg_counter += ft_putchar(mango_loko[i]);
		i++;
	}
	va_end(beans);
	;
	printf("%zu\n", arg_counter); // testeeeeee
	return (arg_counter);
}

int	main(void)
{
	//char	potato = 'y';
	//char	fisch_kuchen = 'p';
	char	*kaputt = "abcdef";

	//ft_printf("%c\n\n\n\n\n%c\n", potato, fisch_kuchen);
	ft_printf("%s\n", kaputt);
	// printf("%c\n", potato);
	return (0);
}
