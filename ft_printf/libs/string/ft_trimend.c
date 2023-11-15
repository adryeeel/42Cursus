/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trimend.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:03:37 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/10 12:02:36 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

char	*ft_trimend(char const *str, char const *set)
{
	char	*o_str;
	char	*trimmed;
	size_t	str_len;

	o_str = (char *)str;
	str_len = ft_strlen(str);
	str += str_len - NULL_CHAR;
	while (str_len > 0 && ft_strcontains(set, *str))
	{
		str--;
		str_len--;
	}
	trimmed = (char *)malloc((str_len + NULL_CHAR) * sizeof(char));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, o_str, str_len + NULL_CHAR);
	return (trimmed);
}
