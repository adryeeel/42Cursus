/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:02:17 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 17:56:49 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_utils.h"

#define HEX_BASE 16

size_t	ft_print_hex(unsigned long num)
{
	char	digit;
	char	*base;
	int		shift;
	size_t	wrote_amount;

	wrote_amount = 0;
	base = "0123456789abcdef";
	shift = sizeof(num) * 8 - 4;
	while (shift >= 0)
	{
		digit = base[(num >> shift) & 0xF];
		if (digit != '0' || wrote_amount > 0)
		{
			write(STDOUT_FILENO, &digit, 1);
			wrote_amount++;
		}
		shift -= 4;
	}
	if (wrote_amount == 0)
	{
		write(STDOUT_FILENO, "0", 1);
		wrote_amount++;
	}
	return (wrote_amount);
}
