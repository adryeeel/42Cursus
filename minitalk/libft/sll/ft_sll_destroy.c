/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sll_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:42:51 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 21:43:48 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sll.h"

void	ft_sll_destroy(t_sll *self)
{
	t_sll_node	*temp_node;
	t_sll_node	*current_node;

	temp_node = NULL;
	current_node = self->head;
	while (current_node != NULL)
	{
		temp_node = current_node;
		current_node = current_node->next;
		free(temp_node);
	}
	free(self);
}
