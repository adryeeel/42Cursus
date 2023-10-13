/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:20:30 by arocha-b          #+#    #+#             */
/*   Updated: 2023/10/13 12:01:07 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_count_digits(long num)
{
	size_t	digits_amount;

	digits_amount = 0;
	if (num < 0)
		num = -num;
	if (num < 10)
		return (1);
	while (num)
	{
		num /= 10;
		digits_amount++;
	}
	return (digits_amount);
}

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

char	*ft_itoa(int n)
{
	long	num;
	char	*str;
	size_t	str_len;

	num = (long)n;
	str_len = ft_count_digits(num);
	if (num < 0)
		str_len++;
	str = (char *)malloc((str_len + NULL_CHAR) * sizeof(char));
	if (!str)
		return (NULL);
	*str = '\0';
	ft_assign(str, num, str_len);
	return (str);
}
