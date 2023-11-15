/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:09:14 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/06 11:15:57 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

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
