/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:20:22 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/10 12:15:31 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Check if a char is a space or a tab.
 *
 * This function determines if a character 'c' is blank, that is,
 * if 'c' is a space or a tabulation.
 *
 * @param c (int) | The character to be compared.
 * @return 1 (true) or 0 (false).
 *
 */

int	ft_isblank(int c)
{
	return (c == ' ' || c == '\t');
}
