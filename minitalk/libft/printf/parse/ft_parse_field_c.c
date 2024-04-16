/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_field_c.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:28:39 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 17:56:49 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_utils.h"

size_t	ft_parse_field_c(t_flags flags, char value)
{
	int		field_width;
	size_t	wrote_amount;

	wrote_amount = 0;
	field_width = flags.field_width - 1;
	if (flags.minus)
	{
		wrote_amount += ft_print_char(value);
		wrote_amount += ft_print_padding(field_width, " ");
		return (wrote_amount);
	}
	wrote_amount += ft_print_padding(field_width, " ");
	wrote_amount += ft_print_char(value);
	return (wrote_amount);
}
