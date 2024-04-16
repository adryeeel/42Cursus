/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:54:56 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 17:59:39 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include "../convert/ft_convert.h"
# include "../ctype/ft_ctype.h"
# include "../mem/ft_mem.h"
# include "../print/ft_print.h"
# include "../string/ft_string.h"
# include <stdarg.h>
# include <stdbool.h>

typedef struct s_flags
{
	bool	dot;
	bool	plus;
	bool	zero;
	bool	hash;
	bool	space;
	bool	minus;
	bool	number;

	size_t	precision;
	size_t	field_width;
}			t_flags;

bool		ft_isflag(char c);
bool		ft_isspecifier(char c);

void		ft_init_flags(t_flags *flags);
int			ft_flag_size(const char *format_substr);
t_flags		ft_parse_flags(const char *format_substr, char spec);

void		ft_parse_prefix_i(t_flags flags, char **str, long *value);
size_t		ft_parse_field_i(t_flags flags, char *pad_str, long value);
void		ft_parse_precision_i(t_flags flags, char **str, long value);
size_t		ft_parse_i(const char *format_substr, long value, char spec);

size_t		ft_parse_x(const char *format_substr, unsigned long value,
				char spec);
void		ft_parse_prefix_x(t_flags flags, char **str, unsigned long value,
				char spec);
void		ft_parse_precision_x(t_flags flags, char **str,
				unsigned long value);
size_t		ft_parse_field_x(t_flags flags, char *pad_str, char spec,
				unsigned long value);

size_t		ft_parse_field_c(t_flags flags, char value);
size_t		ft_parse_c(const char *format_substr, char value);

size_t		ft_parse_s(const char *format_substr, char *value);
size_t		ft_parse_field_s(t_flags flags, char *value, size_t n);

size_t		ft_parse_null(t_flags flags, char spec);
size_t		ft_parse_field_null(t_flags flags, char spec);

size_t		ft_parse_format(const char *format, va_list args);
size_t		ft_parse_substr(const char *format_substr, va_list args);

size_t		ft_print_char(char c);
size_t		ft_print_str(char *s);
size_t		ft_print_nbr(long num);
size_t		ft_print_null(char type);
size_t		ft_print_ptr(unsigned long ptr);
size_t		ft_print_hex(unsigned long num);
size_t		ft_print_uphex(unsigned int num);
size_t		ft_print_padding(int width, char *pad);
size_t		ft_print_prefix_i(t_flags flags, long *value);
size_t		ft_print_prefix_x(t_flags flags, char spec, unsigned long value);

char		*ft_format_substr(const char *format);
void		ft_strcat_safe(char **dest, char *src);
char		ft_get_specifier(const char *format_substr);

#endif
