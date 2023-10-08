/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:16:25 by arocha-b          #+#    #+#             */
/*   Updated: 2023/10/06 00:25:17 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h";

// TODO: Compare with original function

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *o_s;

	o_s = s;
	while (n-- > 0)
		*o_s++ = c;

	return (s);
}
