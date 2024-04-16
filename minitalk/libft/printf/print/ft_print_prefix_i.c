/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_prefix_i.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:29:22 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 17:56:49 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_utils.h"

size_t	ft_print_prefix_i(t_flags flags, long *value)
{
	size_t	wrote_amount;

	wrote_amount = 0;
	if (flags.plus && *value >= 0)
		wrote_amount = write(STDOUT_FILENO, "+", 1);
	else if (flags.plus || *value < 0)
	{
		wrote_amount = write(STDOUT_FILENO, "-", 1);
		*value = -(*value);
	}
	else if (flags.space)
		wrote_amount = write(STDOUT_FILENO, " ", 1);
	return (wrote_amount);
}
