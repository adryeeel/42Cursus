/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 21:49:05 by arocha-b          #+#    #+#             */
/*   Updated: 2023/10/13 22:10:19 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp_node;
	t_list *current_node;

	current_node = *lst;
	while (current_node)
	{
		tmp_node = current_node;
		current_node = current_node->next;
		del(tmp_node->content);
		free(tmp_node);
	}
	*lst = NULL;
}
