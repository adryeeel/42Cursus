/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isflag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:03:02 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 22:41:42 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_PRINTF_PRIVATE_H
#include "../ft_printf.h"

bool	ft_isflag(char c)
{
	if (c && ft_strchr("#-+.0 ", c))
		return (true);
	return (false);
}
