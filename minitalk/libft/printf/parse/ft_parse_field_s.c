/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_field_s.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:28:39 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 22:42:05 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_PRINTF_PRIVATE_H
#include "../ft_printf.h"

static size_t	ft_print_str_n(const char *s, size_t n)
{
	return (write(STDOUT_FILENO, s, n));
}

size_t	ft_parse_field_s(t_flags flags, char *value, size_t n)
{
	int		field_width;
	size_t	wrote_amount;

	wrote_amount = 0;
	field_width = flags.field_width - n;
	if (flags.minus)
	{
		wrote_amount += ft_print_str_n(value, n);
		wrote_amount += ft_print_padding(field_width, " ");
		return (wrote_amount);
	}
	wrote_amount += ft_print_padding(field_width, " ");
	wrote_amount += ft_print_str_n(value, n);
	return (wrote_amount);
}
