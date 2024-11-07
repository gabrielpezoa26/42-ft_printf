/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:08:55 by gabriel           #+#    #+#             */
/*   Updated: 2024/11/07 11:03:39 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h> //aaaaaaaaaaaaaa

static size_t	ft_verify_type(const char x, va_list arg_box)
{
	size_t	result;

	result = 0;
	if (x == 'c')
		result += ft_putchar(va_arg(arg_box, int));
	if (x == 's')
		result += ft_putstr(va_arg(arg_box, char *));
	else if (x == '%')
		result += ft_putchar('%');
	return (result);
}

int	ft_printf(const char *format, ...)
{
	char	*type;
	va_list	arg_box;
	size_t	i;
	size_t	arg_counter;

	type = "cspdiuxXs%";
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
	printf("%zu\n", arg_counter);
	return (arg_counter);
}

int	main(void)
{
// 	char	potato = 'y';
// 	char	fisch_kuchen = 'p';
// 	//char	*kaputt = "abcdef";
// 	int		estojo = 123;
	char	percent;

	ft_printf("%%\n", percent);
// 	ft_printf("%c\n\n\n\n\n%c\n", potato, fisch_kuchen);
// 	//ft_printf("%s\n", kaputt);
// 	//ft_printf("%i\n", estojo);
// 	// printf("%c\n", potato);
 	return (0);
}
