/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:08:42 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/10 12:17:41 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Check if a char is alphabetical uppercase.
 *
 * This function determines if a character 'c' is an alphabetical uppercase
 * that is, a character between 'A' and 'Z' (both inclusive).
 *
 * @param c (int) | The character to be compared.
 * @return 1 (true) or 0 (false).
 *
 */

int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
