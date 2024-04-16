/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:42:15 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 17:56:49 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_utils.h"

size_t	ft_print_ptr(unsigned long ptr)
{
	size_t	wrote_amount;

	wrote_amount = 2;
	if (ptr == 0)
		return (ft_print_null('p'));
	write(STDOUT_FILENO, "0x", 2);
	wrote_amount += ft_print_hex(ptr);
	return (wrote_amount);
}
