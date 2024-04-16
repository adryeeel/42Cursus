/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sll_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:52:09 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 17:50:13 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sll.h"

t_sll	*ft_sll_create(void)
{
	t_sll	*list;

	list = (t_sll *)malloc(sizeof(t_sll));
	list->size = 0;
	list->head = NULL;
	list->tail = NULL;
	return (list);
}
