/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_substr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 00:27:16 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 17:56:49 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_utils.h"

size_t	ft_parse_substr(const char *format_substr, va_list args)
{
	char	specifier;

	specifier = ft_get_specifier(format_substr + 1);
	if (specifier == '%')
		return (ft_print_char('%'));
	if (specifier == 'c')
		return (ft_parse_c(format_substr, (char)va_arg(args, int)));
	if (specifier == 'u')
		return (ft_parse_i(format_substr, (unsigned)va_arg(args, unsigned),
				specifier));
	if (specifier == 'd' || specifier == 'i')
		return (ft_parse_i(format_substr, (int)va_arg(args, int), specifier));
	if (specifier == 'p')
		return (ft_parse_x(format_substr, (unsigned long)va_arg(args,
					unsigned long), specifier));
	if (specifier == 'x' || specifier == 'X')
		return (ft_parse_x(format_substr, (unsigned)va_arg(args, unsigned),
				specifier));
	if (specifier == 's')
		return (ft_parse_s(format_substr, va_arg(args, char *)));
	return (0);
}
