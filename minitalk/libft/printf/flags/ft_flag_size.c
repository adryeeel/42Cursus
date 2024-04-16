/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 03:38:37 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 17:56:49 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_utils.h"

int	ft_flag_size(const char *format_substr)
{
	int		res;
	size_t	i;
	size_t	len;
	size_t	start;
	char	*size_str;

	i = 0;
	while (format_substr[i] && !ft_isdigit(format_substr[i]))
		i++;
	start = i;
	while (format_substr[i] && ft_isdigit(format_substr[i]))
		i++;
	len = i - start;
	size_str = ft_substr(format_substr, start, len);
	res = ft_atoi(size_str);
	free(size_str);
	return (res);
}
