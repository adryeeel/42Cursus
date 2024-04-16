/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dequeue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:00:35 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 21:17:48 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue.h"

void	ft_dequeue(t_queue *q)
{
	t_node	*node;

	if (!q->head)
		return ;
	node = q->head;
	q->head = q->head->next;
	if (!q->head)
		q->tail = NULL;
	free(node);
}
