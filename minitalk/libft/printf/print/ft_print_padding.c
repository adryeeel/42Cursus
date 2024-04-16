/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_padding.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:21:56 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 22:43:08 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_PRINTF_PRIVATE_H
#include "../ft_printf.h"

size_t	ft_print_padding(int width, char *pad)
{
	int	o_width;

	o_width = width;
	if (width <= 0)
		return (0);
	while (o_width-- > 0)
		write(STDOUT_FILENO, pad, 1);
	return (width);
}
