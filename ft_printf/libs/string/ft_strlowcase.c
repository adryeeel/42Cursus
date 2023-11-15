/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:03:22 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/06 11:16:29 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ctype/ft_ctype.h"
#include "ft_string.h"
#include <stdlib.h>

char	*ft_strlowcase(char *str)
{
	size_t	index;
	char	*lower_str;
	size_t	str_size;

	index = 0;
	str_size = ft_strsize(str);
	lower_str = (char *)malloc(str_size * sizeof(char));
	if (!lower_str)
		return (NULL);
	while (*str)
		lower_str[index++] = ft_tolower(*str++);
	lower_str[index] = '\0';
	return (lower_str);
}
