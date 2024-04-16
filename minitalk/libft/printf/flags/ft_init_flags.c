/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 03:28:13 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 17:56:49 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_utils.h"

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
