/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:36:53 by arocha-b          #+#    #+#             */
/*   Updated: 2023/10/04 10:36:53 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// TODO: Compare with original function

void ft_bzero(void *s, size_t n)
{
	unsigned char *o_s;

	o_s = s;
	while (n-- > 0)
		*o_s++ = '\0';

	return (s);
}
