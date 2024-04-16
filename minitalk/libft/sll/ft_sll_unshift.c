/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sll_unshift.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:40:33 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 21:41:51 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sll.h"

static void	ft_sll_to_premier(t_sll *self, t_sll_node *new_node)
{
	new_node->next = NULL;
	self->head = new_node;
	self->tail = new_node;
	self->size++;
}

void	ft_sll_unshift(t_sll *self, t_sll_node *new_node)
{
	if (self->size == 0)
	{
		ft_sll_to_premier(self, new_node);
		return ;
	}
	self->size++;
	new_node->next = self->head;
	self->head = new_node;
}
