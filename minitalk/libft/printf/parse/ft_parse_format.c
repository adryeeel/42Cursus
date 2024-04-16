/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:33:37 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 17:56:49 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_utils.h"

size_t	ft_parse_format(const char *format, va_list args)
{
	char	*format_substr;
	size_t	wrote_amount;

	wrote_amount = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format_substr = ft_format_substr(format);
			wrote_amount += ft_parse_substr(format_substr, args);
			format += ft_strlen(format_substr);
			free(format_substr);
			continue ;
		}
		wrote_amount += write(STDOUT_FILENO, format, 1);
		format++;
	}
	return (wrote_amount);
}

// size_t ft_parse_format(const char *format, va_list args)
// {
// 	size_t i;
// 	va_list args_copy;
// 	size_t wrote_amount;

// 	i = 0;
// 	wrote_amount = 0;

// 	va_copy(args_copy, args);

// 	while (format[i])
// 	{
// 		if (format[i] == '%' && ft_isflag(format[i + 1]))
// 		{
// 			ft_print_flag(format[i + 1], args_copy);
// 			i += 2;
// 		}
// 		if (format[i] == '%' && ft_isspecifier(format[i + 1]))
// 		{
// 			wrote_amount += ft_print_specifier(format[i + 1], args);
// 			i += 2;
// 			continue ;
// 		}
// 		if (format[i] == '%')
// 		{
// 			i++;
// 			continue ;
// 		}
// 		wrote_amount += write(STDOUT_FILENO, format + i, 1);
// 		i++;
// 	}
// 	return (wrote_amount);
// }
