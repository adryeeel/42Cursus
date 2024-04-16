/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_substr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:04:14 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 17:56:49 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_utils.h"

char	*ft_format_substr(const char *format)
{
	char	*substr;
	size_t	i;
	size_t	len;
	size_t	start;

	i = 0;
	len = 2;
	while (format[i] && format[i] != '%')
		i++;
	start = i;
	while (format[i + 1] && !ft_isspecifier(format[i + 1]))
		i++;
	len += i - start;
	substr = ft_substr(format, start, len);
	if (!*substr)
		return (NULL);
	return (substr);
}
