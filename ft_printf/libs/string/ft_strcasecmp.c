/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:22:23 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/06 11:15:57 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_strcasecmp(char *s1, char *s2)
{
	char	*s1_lower;
	char	*s2_lower;

	s1_lower = ft_strlowcase(s1);
	s2_lower = ft_strlowcase(s2);
	return (ft_strcmp(s1_lower, s2_lower));
}
