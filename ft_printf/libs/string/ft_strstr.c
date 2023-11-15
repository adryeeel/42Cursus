/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:42:44 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/06 11:15:57 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*strstr(const char *haystack, const char *needle)
{
	if (!(*needle))
		return ((char *)haystack);
	while (*haystack)
	{
		if (*haystack == *needle && !ft_strncmp(haystack, needle,
				ft_strlen(needle)))
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
