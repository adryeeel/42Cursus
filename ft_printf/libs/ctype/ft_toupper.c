/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 02:47:44 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/06 11:17:12 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief Convertes a lowercase alphabetical character to uppercase.
 *
 * This function converts a character 'c' to lowercase if it is uppercase.
 *
 * @param c (int) | The character to be compared.
 * @return c (char) | The converted character
 *
 */

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c -= 32);
	return (c);
}
