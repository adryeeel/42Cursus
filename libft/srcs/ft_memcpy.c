/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:41:05 by arocha-b          #+#    #+#             */
/*   Updated: 2023/10/06 00:25:01 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h";

// TODO: Compare with original function

void *ft_memcpy(void *dest, const char *src, size_t n)
{
	unsigned char *o_dest;
	const unsigned char *o_src;

	o_src = src;
	o_dest = dest;

	while (n-- > 0)
		*o_dest++ = *o_src++;

	return (dest);
}
