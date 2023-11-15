/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_specifier.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:44:24 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/14 15:48:29 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "../string/ft_string.h"


void ft_print_specifier(char specifier, va_list arguments)
{
	if (specifier == 'c')
		ft_putchar_fd(va_arg(arguments, int), STDOUT_FILENO);

	else if (specifier == '%')
		ft_putchar_fd('%', STDOUT_FILENO);

	else if (specifier == 'd' || specifier == 'i')
		ft_putnbr_fd(va_arg(arguments, int), STDOUT_FILENO);

	else if (specifier == 'u')
		ft_putunbr_fd(va_arg(arguments, unsigned int), STDOUT_FILENO);

	else if (specifier == 's')
		ft_putstr_fd(va_arg(arguments, char *), STDOUT_FILENO);

	else if (specifier == 'x')
		ft_puthex_fd(va_arg(arguments, unsigned int), STDOUT_FILENO);

	else if (specifier == 'X')
		ft_putupphex_fd(va_arg(arguments, unsigned int), STDOUT_FILENO);
}
