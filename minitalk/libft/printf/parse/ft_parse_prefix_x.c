/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_prefix_x.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:27:06 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 17:56:49 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_utils.h"

void	ft_parse_prefix_x(t_flags flags, char **str, unsigned long value,
		char spec)
{
	char	*join_str;

	if (!*str)
		return ;
	if (flags.zero && !flags.field_width)
		flags.zero = false;
	if (((!flags.zero || flags.dot) && flags.hash && value > 0) || spec == 'p')
	{
		join_str = ft_strjoin(*str, "0x");
		free(*str);
		*str = join_str;
	}
}
