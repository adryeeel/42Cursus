/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 18:28:46 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 22:41:52 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_PRINTF_PRIVATE_H
#include "../ft_printf.h"

size_t	ft_parse_c(const char *format_substr, char value)
{
	t_flags	flags;
	size_t	wrote_amount;

	wrote_amount = 0;
	flags = ft_parse_flags(format_substr, 'c');
	if (flags.number)
		return (ft_parse_field_c(flags, value));
	wrote_amount += ft_print_char(value);
	return (wrote_amount);
}
