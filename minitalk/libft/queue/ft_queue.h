/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 20:50:36 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/14 00:06:39 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_QUEUE_H
# define FT_QUEUE_H

# include "../mem/ft_mem.h"
# include <stdlib.h>

typedef struct s_node
{
	void			*data;
	struct s_node	*next;

}					t_node;

typedef struct s_queue
{
	t_node			*head;
	t_node			*tail;

}					t_queue;

void				ft_dequeue(t_queue *q);
void				ft_init_queue(t_queue *q);
void				ft_enqueue(t_queue *q, void *data);

#endif
