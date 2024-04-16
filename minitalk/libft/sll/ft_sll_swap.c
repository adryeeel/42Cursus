/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sll_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:55:39 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 21:59:25 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sll.h"

void	ft_sll_swap(t_sll *self, int x, int y)
{
	t_sll_node	*tmp;
	t_sll_node	*x_node;
	t_sll_node	*y_node;
	t_sll_node	*prev_x_node;
	t_sll_node	*prev_y_node;

	tmp = NULL;
	x_node = ft_sll_get(self, x);
	y_node = ft_sll_get(self, y);
	prev_x_node = ft_sll_get(self, x - 1);
	prev_y_node = ft_sll_get(self, y - 1);
	if (!x_node || x >= y || !y_node)
		return ;
	if (!prev_x_node)
		self->head = y_node;
	else
		prev_x_node->next = y_node;
	prev_y_node->next = x_node;
	tmp = x_node->next;
	x_node->next = y_node->next;
	y_node->next = tmp;
}
