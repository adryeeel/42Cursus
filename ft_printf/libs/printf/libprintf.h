/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 02:46:28 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/14 14:48:05 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
#define LIBPRINTF_H

#include <stdlib.h>
#include <stdarg.h>

size_t ft_argslen(const char *format);
char ft_get_specifier(const char *format);
int ft_printf(const char *format, ...);
void ft_print_specifier(char specifier, va_list arguments);

#endif
