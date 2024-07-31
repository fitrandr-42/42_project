/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_reverse_rotate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 09:19:36 by fitrandr          #+#    #+#             */
/*   Updated: 2024/05/21 09:22:49 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	lst_reverse_rotate(t_stack **node)
{
	t_stack	*last;

	if (!(*node) || !(*node)->next)
		return ;
	last = lst_last(*node);
	last->prev->next = NULL;
	last->prev = NULL;
	last->next = *node;
	(*node)->prev = last;
	*node = last;
}

void	rra(t_stack **node)
{
	lst_reverse_rotate(node);
	write (1, "rra\n", 4);
}

void	rrb(t_stack **node)
{
	lst_reverse_rotate(node);
	write (1, "rrb\n", 4);
}

void	rrr(t_stack **node, t_stack **node2)
{
	lst_reverse_rotate(node);
	lst_reverse_rotate(node2);
	write (1, "rrr\n", 4);
}
