/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:55:11 by arocha-b          #+#    #+#             */
/*   Updated: 2024/02/22 01:20:23 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	num;
	size_t	wrote_amount;

	num = (long)n;
	wrote_amount = 0;
	if (num < 0)
	{
		num = -num;
		write(fd, "-", 1);
		wrote_amount++;
	}
	if (num >= 10)
		wrote_amount += ft_putnbr_fd(num / 10, fd);
	c = num % 10 + '0';
	write(fd, &c, 1);
	return (++wrote_amount);
}
