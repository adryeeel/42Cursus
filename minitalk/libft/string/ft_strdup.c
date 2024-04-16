/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:43:34 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 22:23:16 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strdup(const char *str)
{
	size_t	size;
	char	*new_str;

	size = ft_strlen(str) + 1;
	new_str = (char *)malloc(size * sizeof(char));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, str, size);
	return (new_str);
}
