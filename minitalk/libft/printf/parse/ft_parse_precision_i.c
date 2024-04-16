/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_precision_i.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:28:03 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 22:42:24 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_PRINTF_PRIVATE_H
#include "../ft_printf.h"

void	ft_parse_precision_i(t_flags flags, char **str, long value)
{
	int		pad_size;
	char	*join_str;

	if (!*str)
		return ;
	pad_size = flags.precision - ft_nbrlen(value, 10);
	while (pad_size-- > 0)
	{
		join_str = ft_strjoin(*str, "0");
		free(*str);
		*str = join_str;
	}
}
