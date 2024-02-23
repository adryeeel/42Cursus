/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:01:57 by arocha-b          #+#    #+#             */
/*   Updated: 2023/10/14 17:39:19 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*o_str;

	o_str = (unsigned char *)str;
	while (n-- > 0)
	{
		if (*o_str == (unsigned char)c)
			return (o_str);
		o_str++;
	}
	return (0);
}
