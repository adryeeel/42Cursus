/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_enqueue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:00:56 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 21:12:06 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue.h"

static t_node	*ft_get_node(void *data)
{
	t_node	*node;

	node = ft_calloc(1, sizeof(t_node));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

void	ft_enqueue(t_queue *q, void *data)
{
	t_node	*node;

	node = ft_get_node(data);
	if (!q || !node)
		return ;
	if (q->tail)
		q->tail->next = node;
	q->tail = node;
	if (!q->head)
		q->head = node;
}
