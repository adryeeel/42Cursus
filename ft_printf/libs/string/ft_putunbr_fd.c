/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:15:48 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/14 15:17:46 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putunbr_fd(unsigned int n, int fd)
{
	char			c;
	unsigned long	num;

	num = (unsigned long)n;
	if (num >= 10)
		ft_putunbr_fd(num / 10, fd);
	c = num % 10 + '0';
	write(fd, &c, 1);
}
