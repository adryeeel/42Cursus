/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:09:14 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 22:23:45 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*newstr;
	size_t	index;
	size_t	s_len;

	index = 0;
	s_len = ft_strlen(s);
	newstr = (char *)malloc((s_len + NULL_CHAR) * sizeof(char));
	if (!newstr)
		return (NULL);
	while (index < s_len)
	{
		newstr[index] = f(index, s[index]);
		index++;
	}
	newstr[index] = '\0';
	return (newstr);
}
