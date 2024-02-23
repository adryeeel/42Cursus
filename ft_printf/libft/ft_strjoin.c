/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:31:59 by arocha-b          #+#    #+#             */
/*   Updated: 2023/10/11 18:39:18 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*jnd_str;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	jnd_str = (char *)malloc(size * sizeof(char));
	if (!jnd_str)
		return (NULL);
	*jnd_str = '\0';
	ft_strlcat(jnd_str, s1, size);
	ft_strlcat(jnd_str, s2, size);
	return (jnd_str);
}