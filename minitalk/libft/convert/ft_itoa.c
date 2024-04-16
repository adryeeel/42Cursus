/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:20:30 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 22:25:35 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../string/ft_string.h"
#include "ft_convert.h"

#define DECIMAL 10

static void	ft_assign(char *str, long num, size_t len)
{
	if (num == 0)
	{
		*str++ = '0';
		*str = '\0';
		return ;
	}
	if (num < 0)
	{
		len--;
		num = -num;
		*str++ = '-';
	}
	str += len;
	*str-- = '\0';
	while (num)
	{
		*str-- = num % 10 + '0';
		num /= 10;
	}
}

char	*ft_itoa(long n)
{
	char	*str;
	size_t	str_len;

	str_len = ft_nbrlen(n, DECIMAL);
	if (n < 0)
		str_len++;
	str = (char *)malloc((str_len + NULL_CHAR) * sizeof(char));
	if (!str)
		return (NULL);
	*str = '\0';
	ft_assign(str, n, str_len);
	return (str);
}
