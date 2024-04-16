/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_safe.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 01:52:25 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 22:44:12 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_PRINTF_PRIVATE_H
#include "ft_printf.h"

void	ft_strcat_safe(char **dest, char *src)
{
	char	*cat_str;
	size_t	total_len;

	if (!src || !dest)
		return ;
	total_len = ft_strlen(*dest) + ft_strlen(src);
	cat_str = ft_calloc(total_len + NULL_CHAR, sizeof(char));
	ft_strlcat(cat_str, *dest, total_len + NULL_CHAR);
	ft_strlcat(cat_str, src, total_len + NULL_CHAR);
	free(*dest);
	*dest = cat_str;
}
