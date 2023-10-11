/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:13:26 by arocha-b          #+#    #+#             */
/*   Updated: 2023/10/11 11:19:27 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*o_s1;
	unsigned char	*o_s2;

	o_s1 = (unsigned char *)s1;
	o_s2 = (unsigned char *)s2;
	while (n > 0 && *o_s1 == *o_s2)
	{
		o_s1++;
		o_s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*o_s1 - *o_s2);
}
