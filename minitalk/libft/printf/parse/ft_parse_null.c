/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_null.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 01:30:00 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 17:56:49 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_utils.h"

size_t	ft_parse_null(t_flags flags, char spec)
{
	bool	has_field;
	size_t	wrote_amount;

	wrote_amount = 0;
	has_field = flags.precision >= ft_strlen("(null)");
	if (spec == 's' && flags.dot && !has_field && !flags.number)
		return (0);
	else if (spec == 's' && flags.number && flags.dot && !has_field)
		wrote_amount += ft_parse_field_null(flags, '\0');
	else if (flags.number)
		wrote_amount += ft_parse_field_null(flags, spec);
	else
		wrote_amount += ft_print_null(spec);
	return (wrote_amount);
}
