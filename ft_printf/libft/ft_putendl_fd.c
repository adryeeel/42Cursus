/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:50:58 by arocha-b          #+#    #+#             */
/*   Updated: 2024/02/21 19:08:29 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putendl_fd(char *s, int fd)
{
	size_t	wrote_amount;

	wrote_amount = ft_putstr_fd(s, fd);
	wrote_amount += write(fd, "\n", 1);
	return (wrote_amount);
}
