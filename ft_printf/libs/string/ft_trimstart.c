/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trimstart.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:10:10 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/10 12:02:50 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

char	*ft_trimstart(char const *str, char const *set)
{
	char	*trimmed;
	size_t	trimmed_len;

	while (*str && ft_strcontains(set, *str))
		str++;
	trimmed_len = ft_strlen(str);
	trimmed = (char *)malloc((trimmed_len + NULL_CHAR) * sizeof(char));
	ft_strlcpy(trimmed, str, trimmed_len + NULL_CHAR);
	return (trimmed);
}
