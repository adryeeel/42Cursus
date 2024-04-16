/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:21:52 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 22:24:11 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (!(*little))
		return ((char *)big);
	while (len > 0 && *big)
	{
		if (*big == *little && len >= ft_strlen(little) && ft_strncmp(big,
				little, ft_strlen(little)) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (0);
}
