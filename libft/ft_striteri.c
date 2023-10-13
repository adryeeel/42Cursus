/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:25:46 by arocha-b          #+#    #+#             */
/*   Updated: 2023/10/13 12:41:12 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t index;

	index = 0;
	while (*s)
		f(index++, s++);
}
