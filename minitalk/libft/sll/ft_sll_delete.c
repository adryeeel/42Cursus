/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sll_delete.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:44:36 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 23:25:01 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sll.h"

void	ft_sll_delete(t_sll *self, size_t index)
{
	t_sll_node	*prev_node;
	t_sll_node	*next_node;

	if (index <= 0)
	{
		ft_sll_shift(self);
		return ;
	}
	else if (index >= self->size - 1)
	{
		ft_sll_pop(self);
		return ;
	}
	prev_node = ft_sll_get(self, index - 1);
	next_node = ft_sll_get(self, index + 1);
	free(prev_node->next);
	prev_node->next = next_node;
	self->size--;
}
