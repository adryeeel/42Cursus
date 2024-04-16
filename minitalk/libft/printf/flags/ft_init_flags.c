/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 03:28:13 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 22:41:35 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_PRINTF_PRIVATE_H
#include "../ft_printf.h"

void	ft_init_flags(t_flags *flags)
{
	flags->dot = false;
	flags->plus = false;
	flags->zero = false;
	flags->hash = false;
	flags->minus = false;
	flags->space = false;
	flags->number = false;
	flags->precision = 0;
	flags->field_width = 0;
}
