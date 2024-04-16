/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 18:28:46 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 17:56:49 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_utils.h"

static void	ft_struppcase_safe(char **str)
{
	char	*upp_str;

	upp_str = ft_struppcase(*str);
	free(*str);
	*str = upp_str;
}

static void	ft_concat_hex(t_flags flags, char **str, long value)
{
	char	*xtoa_res;

	if (!value && flags.dot && !flags.precision)
		return ;
	xtoa_res = ft_xtoa(value);
	ft_strcat_safe(str, xtoa_res);
	free(xtoa_res);
}

size_t	ft_parse_x(const char *format_substr, unsigned long value, char spec)
{
	t_flags	flags;
	char	*parsed_str;
	size_t	wrote_amount;

	wrote_amount = 0;
	flags = ft_parse_flags(format_substr, spec);
	if (spec == 'p' && !value)
		return (ft_parse_null(flags, spec));
	parsed_str = ft_calloc(1, sizeof(char));
	ft_parse_prefix_x(flags, &parsed_str, value, spec);
	if (flags.dot)
		ft_parse_precision_x(flags, &parsed_str, value);
	ft_concat_hex(flags, &parsed_str, value);
	if (spec == 'X')
		ft_struppcase_safe(&parsed_str);
	if (flags.number)
		wrote_amount += ft_parse_field_x(flags, parsed_str, spec, value);
	else
		wrote_amount += ft_print_str(parsed_str);
	free(parsed_str);
	return (wrote_amount);
}
