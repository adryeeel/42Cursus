/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:01:26 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/10 12:16:23 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Check if a char is a digit.
 *
 * This function determines if a character 'c' is a digit, that is,
 * a character between 0 and 9 (both inclusive).
 *
 * @param c (int) | The character to be compared.
 * @return 1 (true) or 0 (false).
 *
 */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
