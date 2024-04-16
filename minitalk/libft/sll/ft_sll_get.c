/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sll_get.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:46:06 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/14 00:04:05 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sll.h"

t_sll_node	*ft_sll_get(t_sll *self, size_t index)
{
	t_sll_node	*found_node;

	if (index > self->size - 1)
		return (NULL);
	if (index == 0)
		return (self->head);
	if (index == self->size - 1)
		return (self->tail);
	found_node = self->head->next;
	while (--index > 0)
		found_node = found_node->next;
	return (found_node);
}
