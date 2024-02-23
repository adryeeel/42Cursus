/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 01:11:47 by arocha-b          #+#    #+#             */
/*   Updated: 2024/02/23 13:51:49 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putunbr_fd(unsigned int num, int fd)
{
	char	c;
	size_t	wrote_amount;

	wrote_amount = 0;
	if (num >= 10)
		wrote_amount += ft_putunbr_fd(num / 10, fd);
	c = num % 10 + '0';
	write(fd, &c, 1);
	return (++wrote_amount);
}
