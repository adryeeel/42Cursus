/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 19:09:30 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/10 19:20:01 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#define BASE "0123456789abcdef"

char	*ft_xtoa(unsigned long num)
{
	char	*str;
	char	*join_str;
	char	*digit;
	int		shift;

	if (num == 0)
		return (ft_strjoin("", "0"));
	shift = sizeof(num) * 8 - 4;
	str = ft_calloc(1, sizeof(char));
	digit = ft_calloc(2, sizeof(char));
	if (!str || !digit)
		return (NULL);
	while (shift >= 0)
	{
		*digit = BASE[(num >> shift) & 0xF];
		if (*digit != '0' || *str)
		{
			join_str = ft_strjoin(str, digit);
			free(str);
			str = join_str;
		}
		shift -= 4;
	}
	free(digit);
	return (str);
}
