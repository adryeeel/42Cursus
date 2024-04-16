/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:13:02 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 22:24:22 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static int	ft_contains(const char *to_search, const char to_found)
{
	while (*to_search)
		if (*to_search++ == to_found)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*end_s1;
	char	*trimmed;
	size_t	trimmed_len;

	end_s1 = (char *)s1 + ft_strlen(s1) - NULL_CHAR;
	while (*s1 && ft_contains(set, *s1))
		s1++;
	trimmed_len = ft_strlen(s1);
	while (trimmed_len && ft_contains(set, *end_s1))
	{
		end_s1--;
		trimmed_len--;
	}
	trimmed = (char *)malloc((trimmed_len + NULL_CHAR) * sizeof(char));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1, trimmed_len + NULL_CHAR);
	return (trimmed);
}
