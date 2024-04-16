/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_field_i.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:28:39 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 22:41:58 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_PRINTF_PRIVATE_H
#include "../ft_printf.h"

size_t	ft_parse_field_i(t_flags flags, char *pad_str, long value)
{
	int		field_width;
	size_t	wrote_amount;

	wrote_amount = 0;
	field_width = flags.field_width - ft_strlen(pad_str);
	if (flags.zero && !flags.dot)
	{
		wrote_amount += ft_print_prefix_i(flags, &value);
		wrote_amount += ft_print_padding(field_width, "0");
		wrote_amount += ft_print_nbr(value);
	}
	else if (flags.minus)
	{
		wrote_amount += ft_print_str(pad_str);
		wrote_amount += ft_print_padding(field_width, " ");
	}
	else
	{
		wrote_amount += ft_print_padding(field_width, " ");
		wrote_amount += ft_print_str(pad_str);
	}
	return (wrote_amount);
}
