/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_specifier.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:06:33 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 22:43:34 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_PRINTF_PRIVATE_H
#include "ft_printf.h"

char	ft_get_specifier(const char *format_substr)
{
	while (*format_substr && !ft_isspecifier(*format_substr))
		format_substr++;
	return (*format_substr);
}
