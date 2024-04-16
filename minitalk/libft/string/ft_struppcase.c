/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struppcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 20:05:50 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 22:24:26 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_struppcase(char *s)
{
	size_t	index;
	char	*upper_str;
	size_t	str_size;

	index = 0;
	str_size = ft_strlen(s);
	upper_str = (char *)malloc((str_size + 1) * sizeof(char));
	if (!upper_str)
		return (NULL);
	while (*s)
		upper_str[index++] = ft_toupper(*s++);
	upper_str[index] = '\0';
	return (upper_str);
}
