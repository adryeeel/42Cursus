/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:57:47 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/06 11:18:03 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

#include "libprintf.h"

int ft_printf(const char *format, ...)
{
	va_list arguments;
	
	va_start(arguments, format);
	va_end(arguments);
}

int main(void)
{
	ft_printf(3, 1, 2, 3);
}
