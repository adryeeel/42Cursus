/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putupphex_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:42:52 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/14 15:50:34 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putupphex_fd(unsigned int n, int fd)
{
	char			c;
	unsigned long	num;
	char 			*hex_base;

	num = (unsigned long)n;
	hex_base = "0123456789ABCDEF";
	if (num >= 10)
		ft_putupphex_fd(num / 16, fd);
	c = hex_base[num % 16];
	write(fd, &c, 1);
}
