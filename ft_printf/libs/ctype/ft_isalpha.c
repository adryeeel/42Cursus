/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:59:12 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/10 12:14:19 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief Check if a char is alphabetical.
 *
 * This function determines if a character 'c' is alphabetical or not,
 * regardless of whether the character is lower or upper case.
 * It uses the functions ft_islower() and ft_isupper() to check this.
 *
 * @param c (int) | The character to be compared.
 * @return 1 (true) or 0 (false).
 *
 */

int	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
