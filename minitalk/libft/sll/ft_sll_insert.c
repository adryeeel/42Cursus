/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sll_insert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:50:30 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/14 00:06:12 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sll.h"

void	ft_sll_insert(t_sll *self, t_sll_node *new_node, size_t index)
{
	t_sll_node	*curr_node;
	t_sll_node	*prev_node;

	if (index <= 0)
	{
		ft_sll_unshift(self, new_node);
		return ;
	}
	if (index >= self->size)
	{
		ft_sll_push(self, new_node);
		return ;
	}
	curr_node = ft_sll_get(self, index);
	prev_node = ft_sll_get(self, --index);
	prev_node->next = new_node;
	new_node->next = curr_node;
	self->size++;
}
