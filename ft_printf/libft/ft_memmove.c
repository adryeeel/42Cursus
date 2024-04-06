/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 20:26:54 by arocha-b          #+#    #+#             */
/*   Updated: 2023/10/10 15:04:03 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	*ft_copy_rev(void *dest, const void *src, size_t n)
{
	unsigned char	*o_src;
	unsigned char	*o_dest;

	o_src = (unsigned char *)src + n - 1;
	o_dest = (unsigned char *)dest + n - 1;
	while (n--)
		*o_dest-- = *o_src--;
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*o_src;
	unsigned char	*o_dest;

	if (!dest && !src)
		return (NULL);
	o_src = (unsigned char *)src;
	o_dest = (unsigned char *)dest;
	if (dest > src)
		return (ft_copy_rev(dest, src, n));
	while (n--)
		*o_dest++ = *o_src++;
	return (dest);
}
