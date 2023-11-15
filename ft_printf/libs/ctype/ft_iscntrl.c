/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:22:14 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/10 12:16:07 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Check if a char is a control character.
 *
 * This function determines if a character 'c' is a control character, that is,
 * a ascii character that don't have a symbol to display them. This characters
 * are between 0 and 31 (both inclusive) of the 7-bit ascii standard.
 *
 * @param c (int) | The character to be compared.
 * @return 1 (true) or 0 (false).
 *
 */

int	ft_iscntrl(int c)
{
	return (c >= 0 && c <= 31);
}
