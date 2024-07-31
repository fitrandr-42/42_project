/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 09:07:16 by fitrandr          #+#    #+#             */
/*   Updated: 2024/05/17 15:31:20 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	lst_rotate(t_stack **node)
{
	t_stack	*temp;
	t_stack	*last;

	if (!(*node) || !(*node)->next)
		return ;
	temp = *node;
	last = lst_last(*node);
	*node = temp->next;
	temp->next = NULL;
	(*node)->prev = NULL;
	temp->prev = last;
	last->next = temp;
}

void	ra(t_stack	**node)
{
	lst_rotate(node);
	write (1, "ra\n", 3);
}

void	rb(t_stack **node)
{
	lst_rotate(node);
	write (1, "rb\n", 3);
}

void	rr(t_stack **node, t_stack **node2)
{
	lst_rotate(node);
	lst_rotate(node2);
	write (1, "rr\n", 3);
}
