/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 03:30:47 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 17:56:49 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_utils.h"

static void	ft_concat_number(t_flags flags, char **str, long value)
{
	char	*itoa_res;

	if (!value && flags.dot && !flags.precision)
		return ;
	itoa_res = ft_itoa(value);
	ft_strcat_safe(str, itoa_res);
	free(itoa_res);
}

size_t	ft_parse_i(const char *format_substr, long value, char spec)
{
	t_flags	flags;
	char	*parsed_str;
	size_t	wrote_amount;

	wrote_amount = 0;
	flags = ft_parse_flags(format_substr, spec);
	parsed_str = ft_calloc(1, sizeof(char));
	if (!parsed_str)
		return (0);
	ft_parse_prefix_i(flags, &parsed_str, &value);
	if (flags.dot)
		ft_parse_precision_i(flags, &parsed_str, value);
	ft_concat_number(flags, &parsed_str, value);
	if (flags.number)
		wrote_amount += ft_parse_field_i(flags, parsed_str, value);
	else
		wrote_amount += ft_print_str(parsed_str);
	free(parsed_str);
	return (wrote_amount);
}
