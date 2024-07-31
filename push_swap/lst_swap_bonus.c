/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_swap_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 07:37:25 by fitrandr          #+#    #+#             */
/*   Updated: 2024/06/02 07:39:51 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "checker_bonus.h"

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
}

void	sb(t_stack **node)
{
	lst_swap(node);
}

void	ss(t_stack **node, t_stack **node2)
{
	lst_swap(node);
	lst_swap(node2);
}
