/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:08:55 by gabriel           #+#    #+#             */
/*   Updated: 2024/11/09 12:41:15 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_verify_type(const char id, va_list arg_box)
{
	int	result;

	result = 0;
	if (id == 'c')
		result += ft_putchar((unsigned char)va_arg(arg_box, int));
	if (id == 's')
		result += ft_putstr(va_arg(arg_box, char *));
	if (id == 'p')
		result += ft_putptr(va_arg(arg_box, void *));
	if (id == 'd')
		result += ft_putnbr(va_arg(arg_box, int));
	if (id == 'i')
		result += ft_putnbr(va_arg(arg_box, int));
	if (id == 'u')
		result += ft_putunbr(va_arg(arg_box, unsigned int));
	if (id == 'x')
		result += ft_print_hex_lower(va_arg(arg_box, unsigned int));
	if (id == 'X')
		result += ft_print_hex_upper(va_arg(arg_box, unsigned int));
	if (id == '%')
		result += ft_putchar('%');
	return (result);
}

int	ft_printf(const char *format, ...)
{
	char	*type;
	va_list	arg_box;
	int		i;
	int		arg_counter;

	type = "cspdiuxX%";
	i = 0;
	arg_counter = 0;
	va_start(arg_box, format);
	while (format[i] != '\0')
	{
		if ((format[i] == '%') && ft_strchr(type, format[i + 1]))
		{
			arg_counter += ft_verify_type(format[i + 1], arg_box);
			i++;
		}
		else
			arg_counter += ft_putchar(format[i]);
		i++;
	}
	va_end(arg_box);
	return (arg_counter);
}
