/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 02:05:20 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 22:23:33 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static size_t	ft_strnlen(const char *s, size_t size)
{
	size_t	len;

	len = 0;
	while (len++ < size && *s++)
		;
	return (--len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*o_dst;
	const char	*o_src;
	size_t		dst_len;
	size_t		free_bytes;

	dst_len = ft_strnlen(dst, size);
	free_bytes = size - dst_len;
	o_src = src;
	o_dst = dst + dst_len;
	if (free_bytes == 0)
		return (size + ft_strlen(src));
	while (--free_bytes > 0 && *o_src)
		*o_dst++ = *o_src++;
	*o_dst = '\0';
	return (dst_len + ft_strlen(src));
}
