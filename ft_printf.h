/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:01:40 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/03/23 21:01:59 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_putstr(char *s);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putunbr(unsigned int n);
int		ft_putptr(void *y);
int		ft_print_hex_upper(unsigned long n);
int		ft_print_hex_lower(unsigned long n);
char	*ft_strchr(const char *s, int c);

#endif

/*
 the main goal of this project is very straightforward, implement the "printf" 
 function, with the more commonly used identifiers. here we learned what is a
 variadic function, a bit of control structures, and basic file organization.
 what i liked about this project is, compared to Libft, we had a bit more of
 freedom on how to organize the code.

*/