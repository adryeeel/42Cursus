/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcontains.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:33:12 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/06 13:25:56 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcontains(const char *to_search, const char to_found)
{
	while (*to_search)
		if (*to_search++ == to_found)
			return (1);
	return (0);
}
