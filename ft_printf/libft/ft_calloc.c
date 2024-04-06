/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:39:47 by arocha-b          #+#    #+#             */
/*   Updated: 2023/10/11 14:41:23 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
