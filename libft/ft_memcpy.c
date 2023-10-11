/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:41:05 by arocha-b          #+#    #+#             */
/*   Updated: 2023/10/10 14:51:12 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
