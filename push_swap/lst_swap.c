/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 08:51:39 by fitrandr          #+#    #+#             */
/*   Updated: 2024/05/13 09:05:24 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	lst_swap(t_stack **node)
{
	t_stack	*temp;

	if (!(*node) || !(*node)->next)
		return ;
	temp = *node;
	*node = temp->next;
	temp->next = (*node)->next;
	temp->prev = *node;
	if ((*node)->next)
		(*node)->next->prev = temp;
	(*node)->next = temp;
	(*node)->prev = NULL;
}

void	sa(t_stack **node)
{
	lst_swap(node);
	write (1, "sa\n", 3);
}

void	sb(t_stack **node)
{
	lst_swap(node);
	write (1, "sb\n", 3);
}

void	ss(t_stack **node, t_stack **node2)
{
	lst_swap(node);
	lst_swap(node2);
	write (1, "ss\n", 3);
}
