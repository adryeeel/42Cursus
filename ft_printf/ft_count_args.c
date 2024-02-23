/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:35:34 by arocha-b          #+#    #+#             */
/*   Updated: 2024/02/20 20:06:25 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_count_args(const char *format)
{
	size_t	args_amount;

	args_amount = 0;
	while (*format)
	{
		if (*format == '%' && ft_isspecifier(*(format + 1)))
		{
			args_amount++;
			format += 2;
			continue ;
		}
		format++;
	}
	return (args_amount);
}
