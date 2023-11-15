/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:35:04 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/10 12:03:38 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*strcasestr(const char *haystack, const char *needle)
{
	char	*lower_needle;
	char	*lower_haystack;

	lower_needle = ft_strlowcase((char *)needle);
	lower_haystack = ft_strlowcase((char *)haystack);
	return (strstr(lower_needle, lower_haystack));
}
