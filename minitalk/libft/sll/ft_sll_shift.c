/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sll_shift.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:39:08 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 21:39:23 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sll.h"

void	ft_sll_shift(t_sll *self)
{
	if (self->size <= 1)
	{
		self->head = NULL;
		self->tail = NULL;
		self->size = 0;
		return ;
	}
	self->head = self->head->next;
	self->size--;
}
