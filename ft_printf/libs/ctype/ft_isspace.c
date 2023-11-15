/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:05:47 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/10 12:17:20 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Check if a char is a space or sub-set of a space.
 *
 * This function determines if a character 'c' is a space or a sub-set of a
 * space, that is, the space character itself or characters that look like a
 * space: 't', '\r', '\v' or '\n'.
 *
 * @param c (int) | The character to be compared.
 * @return 1 (true) or 0 (false).
 *
 */

int	ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}
