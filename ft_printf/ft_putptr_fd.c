/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 00:07:51 by arocha-b          #+#    #+#             */
/*   Updated: 2024/02/23 01:39:08 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnullptr_fd(int fd)
{
	return (write(fd, "(nil)", 5));
}

size_t	ft_putptr_fd(unsigned long ptr, int fd)
{
	size_t	wrote_amount;

	wrote_amount = 2;
	if (ptr == 0)
		return (ft_putnullptr_fd(fd));
	write(fd, "0x", 2);
	wrote_amount += ft_puthex_fd(ptr, fd);
	return (wrote_amount);
}
