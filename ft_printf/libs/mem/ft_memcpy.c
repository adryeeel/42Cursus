/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:41:05 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/10 12:02:02 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

void	*ft_memcpy(void *dest, const char *src, size_t n)
{
	unsigned char		*o_dest;
	const unsigned char	*o_src;

	if (!dest && !src)
		return (NULL);
	o_src = (unsigned char *)src;
	o_dest = dest;
	while (n-- > 0)
		*o_dest++ = *o_src++;
	return (dest);
}
