/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 20:26:54 by arocha-b          #+#    #+#             */
/*   Updated: 2023/10/06 02:47:18 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h";

// TODO: Compare with original function

void *memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *o_src;
	unsigned char *o_dest;
	unsigned char *src_cpy;

	i = 0;
	o_src = src;
	o_dest = dest;

	while (i++ < n)
		*src_cpy++ = *o_src++;

	i = 0;

	while (i++ < n)
		*o_dest++ = *src_cpy++;

	return (dest);
}
