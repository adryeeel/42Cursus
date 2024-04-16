/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_field_null.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 01:39:44 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 17:56:49 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_utils.h"

size_t	ft_parse_field_null(t_flags flags, char spec)
{
	int		field_width;
	size_t	wrote_amount;

	wrote_amount = 0;
	field_width = flags.field_width;
	if (spec == 'p')
		field_width -= ft_strlen("(nil)");
	else if (spec == 's')
		field_width -= ft_strlen("(null)");
	if (flags.minus)
	{
		wrote_amount += ft_print_null(spec);
		wrote_amount += ft_print_padding(field_width, " ");
		return (wrote_amount);
	}
	wrote_amount += ft_print_padding(field_width, " ");
	wrote_amount += ft_print_null(spec);
	return (wrote_amount);
}
