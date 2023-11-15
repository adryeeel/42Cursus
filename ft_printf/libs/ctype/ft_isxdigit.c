/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:12:46 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/10 12:18:05 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief Check if a char is hex digit.
 *
 * This function determines if a character 'c' is a hexadecimal digit, that is,
 * a digit itself (0 to 9) or an alphabetical char (a to f, insensitive case).
 *
 * @param c (int) | The character to be compared.
 * @return 1 (true) or 0 (false).
 *
 */

int	ft_isxdigit(int c)
{
	return (ft_isdigit(c) || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'));
}
