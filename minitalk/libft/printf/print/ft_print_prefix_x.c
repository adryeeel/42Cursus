/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_prefix_x.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:29:22 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 17:56:49 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_utils.h"

size_t	ft_print_prefix_x(t_flags flags, char spec, unsigned long value)
{
	size_t	wrote_amount;

	wrote_amount = 0;
	if (spec == 'p')
		wrote_amount += write(STDOUT_FILENO, "0x", 2);
	else if (flags.hash && spec == 'x' && value > 0)
		wrote_amount += write(STDOUT_FILENO, "0x", 2);
	else if (flags.hash && spec == 'X' && value > 0)
		wrote_amount += write(STDOUT_FILENO, "0X", 2);
	return (wrote_amount);
}
