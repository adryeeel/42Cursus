/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:45:13 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 22:24:14 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*o_s;
	size_t		s_len;

	s_len = ft_strlen(s) + 1;
	o_s = s + s_len - 1;
	while (s_len-- > 0)
	{
		if (*o_s == (char)c)
			return ((char *)o_s);
		o_s--;
	}
	return (0);
}
