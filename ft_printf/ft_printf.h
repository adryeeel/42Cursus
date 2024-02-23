/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:08:36 by arocha-b          #+#    #+#             */
/*   Updated: 2024/02/23 13:56:54 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdbool.h>
# include "libft/libft.h"

size_t	ft_putnull_fd(int fd);
bool	ft_isspecifier(char c);
size_t	ft_nbrlen(long nbr, int base);
size_t	ft_count_args(const char *format);
int		ft_printf(const char *format, ...);
size_t	ft_putunbr_fd(unsigned int num, int fd);
size_t	ft_putupphex_fd(unsigned int num, int fd);
size_t	ft_puthex_fd(unsigned long num, int fd);
size_t	ft_putptr_fd(unsigned long ptr, int fd);
size_t	ft_print_specifier(char specifier, va_list args);
size_t	ft_parse_format(const char *format, va_list args);

#endif
