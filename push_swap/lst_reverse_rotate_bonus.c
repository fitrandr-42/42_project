/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_reverse_rotate_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 07:32:10 by fitrandr          #+#    #+#             */
/*   Updated: 2024/06/02 07:32:56 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
}

void	rrb(t_stack **node)
{
	lst_reverse_rotate(node);
}

void	rrr(t_stack **node, t_stack **node2)
{
	lst_reverse_rotate(node);
	lst_reverse_rotate(node2);
}
