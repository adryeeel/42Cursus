/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sll.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:20:59 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/14 00:05:22 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SLL_H
#define FT_SLL_H

#include <stdlib.h>

typedef struct s_sll_node
{
	void *data;
	struct s_sll_node *next;

} t_sll_node;

typedef struct s_sll
{
	size_t size;
	t_sll_node *head;
	t_sll_node *tail;

} t_sll;

t_sll *ft_sll_create(void);
void ft_sll_destroy(t_sll *self);
void ft_sll_swap(t_sll *self, int x, int y);
void ft_sll_delete(t_sll *self, size_t index);
t_sll_node *ft_sll_get(t_sll *self, size_t index);

void ft_sll_pop(t_sll *self);
void ft_sll_shift(t_sll *self);
void ft_sll_push(t_sll *self, t_sll_node *new_node);
void ft_sll_unshift(t_sll *self, t_sll_node *new_node);

#endif
