/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 00:41:09 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 22:15:16 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_convert.h"

size_t	ft_nbrlen(long nbr, int base)
{
	size_t	nbrlen;

	nbrlen = 0;
	if (nbr == 0)
		return (1);
	if (base < 0)
		return (-1);
	if (nbr < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		nbr /= base;
		nbrlen++;
	}
	return (nbrlen);
}
