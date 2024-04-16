/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:07:11 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 17:57:15 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		wrote_amount;

	va_start(args, format);
	wrote_amount = ft_parse_format(format, args);
	va_end(args);
	return (wrote_amount);
}
