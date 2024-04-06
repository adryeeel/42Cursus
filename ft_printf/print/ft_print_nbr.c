/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:49:40 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/03 02:46:58 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_print_nbr(long num)
{
	size_t	wrote_amount;

	wrote_amount = ft_nbrlen(num, 10);
	if (num < 0)
		wrote_amount++;
	ft_putnbr_fd(num, STDOUT_FILENO);
	return (wrote_amount);
}
