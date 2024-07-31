/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_rotate_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 07:35:32 by fitrandr          #+#    #+#             */
/*   Updated: 2024/06/02 07:36:03 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
}

void	rb(t_stack **node)
{
	lst_rotate(node);
}

void	rr(t_stack **node, t_stack **node2)
{
	lst_rotate(node);
	lst_rotate(node2);
}
