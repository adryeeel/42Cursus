/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 23:56:14 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 22:23:37 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*o_src;

	o_src = src;
	if (size <= 0)
		return (ft_strlen(src));
	while (--size > 0 && *o_src)
		*dst++ = *o_src++;
	*dst = '\0';
	return (ft_strlen(src));
}
