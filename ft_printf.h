/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:01:40 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/11/08 18:21:52 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
int		ft_putstr(char *s);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putunbr(int n);
int		ft_putptr(void *y);
int		ft_print_hex_upper(unsigned long n);
int		ft_print_hex_lower(unsigned long n);
char	*ft_strchr(const char *s, int c);

#endif