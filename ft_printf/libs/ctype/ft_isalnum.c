/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:03:18 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/10 12:11:51 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief Check if a char is alphanumeric.
 *
 * This function determines if a character 'c' is alphanumeric or not.
 * It uses the functions ft_isalpha() and ft_isdigit() to compare the
 * actual character.
 *
 * @param c (int) | The character to be compared.
 * @return 1 (true) or 0 (false).
 *
 * Additional details or notes, such as error handling or usage examples,
 * can be included here.
 */

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
