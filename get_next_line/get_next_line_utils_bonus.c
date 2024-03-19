/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:32:53 by arocha-b          #+#    #+#             */
/*   Updated: 2024/03/15 19:01:04 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len++])
		;
	return (--len);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen(s) + 1;
	while (s_len-- > 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (0);
}

void	*ft_memcpy(void *dest, const char *src, size_t n)
{
	const unsigned char	*o_src;
	unsigned char		*o_dest;

	if (!dest && !src)
		return (NULL);
	o_src = (unsigned char *)src;
	o_dest = dest;
	while (n-- > 0)
		*o_dest++ = *o_src++;
	return (dest);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*mem_ptr;
	size_t	total_bytes;

	total_bytes = nmemb * size;
	mem_ptr = malloc(total_bytes);
	if (!mem_ptr)
		return (0);
	while (total_bytes > 0)
		mem_ptr[--total_bytes] = 0;
	return ((void *)mem_ptr);
}

char	*ft_strmcat(const char *s1, const char *s2)
{
	char	*cat_str;
	size_t	cat_len;

	cat_len = ft_strlen(s1) + ft_strlen(s2);
	cat_str = ft_calloc(cat_len + NULL_CHAR, sizeof(char));
	if (!cat_str)
		return (NULL);
	ft_memcpy(cat_str, s1, ft_strlen(s1));
	ft_memcpy(cat_str + ft_strlen(s1), s2, ft_strlen(s2));
	free((void *)s1);
	return (cat_str);
}
