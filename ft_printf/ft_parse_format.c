/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:33:37 by arocha-b          #+#    #+#             */
/*   Updated: 2024/02/23 01:46:47 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_parse_format(const char *format, va_list args)
{
	size_t	i;
	size_t	wrote_amount;

	i = 0;
	wrote_amount = 0;
	while (format[i])
	{
		if (format[i] == '%' && ft_isspecifier(format[i + 1]))
		{
			wrote_amount += ft_print_specifier(format[i + 1], args);
			i += 2;
			continue ;
		}
		if (format[i] == '%')
		{
			i++;
			continue ;
		}
		wrote_amount += write(STDOUT_FILENO, format + i, 1);
		i++;
	}
	return (wrote_amount);
}
