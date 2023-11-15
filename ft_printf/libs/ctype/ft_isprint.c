/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:10:47 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/10 12:16:40 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Check if a char is printable.
 *
 * This function determines if a character 'c' is printable, that is,
 * if a character has a symbol that displays it. Printable characters
 * are between the ascii's 32 and 126 (both inclusive).
 *
 * @param c (int) | The character to be compared.
 * @return 1 (true) or 0 (false).
 *
 */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
