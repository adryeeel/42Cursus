/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 03:29:00 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 17:56:49 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_utils.h"

static size_t	ft_skip_size(const char *format_substr)
{
	size_t	amount;

	amount = 1;
	while (*format_substr && ft_isdigit(*format_substr))
	{
		amount++;
		format_substr++;
	}
	return (amount);
}

static void	ft_flags_prefix(t_flags *flags, const char *format_substr,
		char spec)
{
	if (spec != 'x' && spec != 'X' && spec != 'i' && spec != 'd')
		return ;
	while (*format_substr)
	{
		if (*format_substr == '+')
			flags->plus = true;
		if (*format_substr == ' ')
			flags->space = true;
		if (*format_substr == '#')
			flags->hash = true;
		format_substr++;
	}
}

static void	ft_flags_field(t_flags *flags, const char *format_substr)
{
	while (*format_substr)
	{
		if (*format_substr == '-')
			flags->minus = true;
		if (*format_substr == '0')
			flags->zero = true;
		if (*format_substr != '0' && ft_isdigit(*format_substr))
		{
			flags->number = true;
			flags->field_width = ft_flag_size(format_substr);
			format_substr += ft_nbrlen(flags->field_width, 10);
			continue ;
		}
		if (*format_substr == '.')
		{
			flags->dot = true;
			flags->precision = ft_flag_size(format_substr);
			format_substr += ft_skip_size(format_substr + 1);
			continue ;
		}
		format_substr++;
	}
}

t_flags	ft_parse_flags(const char *format_substr, char spec)
{
	t_flags	flags;

	ft_init_flags(&flags);
	ft_flags_field(&flags, format_substr);
	ft_flags_prefix(&flags, format_substr, spec);
	return (flags);
}
