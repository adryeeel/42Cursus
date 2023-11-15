/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:10:03 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/06 11:15:57 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

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
