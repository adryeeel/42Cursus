/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_specifier.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:44:49 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/11 14:27:56 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../string/ft_string.h"

char ft_get_specifier(const char *format)
{
	char *specifierChar;
	
	specifierChar = ft_strchr(format, '%');

	if (!specifierChar)
		return 0;
	
	// while (*specifierChar && !ft_strcontains("cspdiuxX%", *specifierChar))
	// 	specifierChar++;
	
	return *(specifierChar + 1);
}
