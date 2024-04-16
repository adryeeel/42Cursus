/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_null.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 01:19:28 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 22:43:06 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_PRINTF_PRIVATE_H
#include "../ft_printf.h"

size_t	ft_print_null(char type)
{
	if (type == 's')
		return (write(STDOUT_FILENO, "(null)", 6));
	else if (type == 'p')
		return (write(STDOUT_FILENO, "(nil)", 5));
	return (0);
}
