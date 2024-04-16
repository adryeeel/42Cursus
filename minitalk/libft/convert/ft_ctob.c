/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctob.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 00:25:18 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 14:21:24 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_convert.h"

int	*ft_ctob(char c)
{
	int		*bin;
	size_t	i;
	size_t	index;

	i = 8;
	index = 0;
	bin = ft_calloc(8 + 1, sizeof(int));
	if (!bin)
		return (NULL);
	while (i-- > 0)
		bin[index++] = (c >> i) & 1;
	bin[index] = -1;
	return (bin);
}
