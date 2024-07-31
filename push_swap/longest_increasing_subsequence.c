/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   longest_increasing_subsequence.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:04:12 by fitrandr          #+#    #+#             */
/*   Updated: 2024/06/05 07:25:52 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	mark_lis(t_stack **node)
{
	t_stack	*max_node;
	t_stack	*temp;
	int		max_length;

	temp = *node;
	max_length = 0;
	while (temp)
	{
		if (temp->length > max_length)
		{
			max_length = temp->length;
			max_node = temp;
		}
		temp = temp->next;
	}
	while (max_node)
	{
		max_node->is_lis = true;
		max_node = max_node->lis_prev;
	}
}

void	lis(t_stack **node)
{
	t_stack	*temp;
	t_stack	*temp2;

	temp = *node;
	while (temp)
	{
		temp2 = *node;
		while (temp2 != temp)
		{
			if (temp->data > temp2->data && (temp->length < temp2->length + 1))
			{
				temp->length = temp2->length + 1;
				temp->lis_prev = temp2;
			}
			temp2 = temp2->next;
		}
		temp = temp->next;
	}
	mark_lis(node);
}

void	separate_lis(t_stack **node, t_stack **temp, int mediane)
{
	while (!is_sorted(*node))
	{
		if ((*node) && (*node)->is_lis && !is_sorted(*node))
			ra(node);
		else
		{
			pb(node, temp);
			if ((*temp)->next && (*temp)->data < mediane && (*node)->is_lis)
			{
				if (is_sorted(*node))
					rb(temp);
				else
					rr(temp, node);
			}
			else if ((*temp) && (*temp)->next && (*temp)->data < mediane)
				rb(temp);
		}
	}
}
