/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sll_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:31:46 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/14 00:03:35 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sll.h"

void	ft_sll_pop(t_sll *self)
{
	t_sll_node	*new_tail;

	if (self->size <= 1)
	{
		self->head = NULL;
		self->tail = NULL;
		self->size = 0;
		return ;
	}
	new_tail = ft_sll_get(self, self->size - 2);
	new_tail->next = NULL;
	self->tail = new_tail;
	self->size--;
}
