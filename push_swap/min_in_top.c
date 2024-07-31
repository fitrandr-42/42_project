/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_in_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 08:40:12 by fitrandr          #+#    #+#             */
/*   Updated: 2024/05/18 14:00:26 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	min_in_top(t_stack	**node, char c)
{
	t_stack	*min_stack;
	int		mediane;

	if (!(*node) && !(*node)->next)
		return ;
	min_stack = get_min_stack(*node);
	mediane = lst_stack_len(*node) / 2;
	while (*node != min_stack)
	{
		if (min_stack->position < mediane)
		{
			if (c == 'a')
				ra(node);
			else
				rb(node);
		}
		else
		{
			if (c == 'a')
				rra(node);
			else
				rrb(node);
		}
	}
}
