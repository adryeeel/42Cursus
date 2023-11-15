/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:05:43 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/10 12:14:44 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Check if a char is alphabetical lowercase.
 *
 * This function determines if a character 'c' is an alphabetical lowercase,
 * that is, a character between 'a' and 'z' (both inclusive).
 *
 * @param c (int) | The character to be compared.
 * @return 1 (true) or 0 (false).
 *
 */

int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
