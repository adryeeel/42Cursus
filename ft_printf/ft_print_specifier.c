/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_specifier.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:20:44 by arocha-b          #+#    #+#             */
/*   Updated: 2024/02/23 01:42:41 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_specifier(char specifier, va_list args)
{
	char	*temp;

	if (specifier == 'c')
		return (ft_putchar_fd(va_arg(args, int), STDOUT_FILENO));
	if (specifier == '%')
		return (ft_putchar_fd('%', STDOUT_FILENO));
	if (specifier == 's')
	{
		temp = va_arg(args, char *);
		if (temp)
			return (ft_putstr_fd(temp, STDOUT_FILENO));
		return (ft_putnull_fd(STDOUT_FILENO));
	}
	if (specifier == 'X')
		return (ft_putupphex_fd(va_arg(args, unsigned), STDOUT_FILENO));
	if (specifier == 'x')
		return (ft_puthex_fd(va_arg(args, unsigned int), STDOUT_FILENO));
	if (specifier == 'p')
		return (ft_putptr_fd(va_arg(args, unsigned long), STDOUT_FILENO));
	if (specifier == 'u')
		return (ft_putunbr_fd(va_arg(args, unsigned), STDOUT_FILENO));
	if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr_fd(va_arg(args, int), STDOUT_FILENO));
	return (0);
}
