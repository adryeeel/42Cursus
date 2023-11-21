/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:57:47 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/21 18:03:11 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../string/ft_string.h"
#include "libprintf.h"
#include <stdarg.h>
#include <stdio.h>

#define SPECIFIERS "cspdiuxX"

int	ft_printf(const char *format, ...)
{
	va_list	arguments;

	va_start(arguments, format);
	while (*format)
	{
		if (*format == '%' && ft_strcontains(SPECIFIERS, *(format + 1)))
		{
			ft_print_specifier(*(format + 1), arguments);
			format += 2;
			continue ;
		}
		if (*format == '%')
			format++;
		if (*format)
		{
			ft_putchar_fd(*format, STDOUT_FILENO);
			format++;
		}
	}
	va_end(arguments);
	return (0);
}
