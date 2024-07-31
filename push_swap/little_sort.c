/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 08:17:57 by fitrandr          #+#    #+#             */
/*   Updated: 2024/05/18 14:03:08 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three(t_stack **node)
{
	t_stack	*max_node;

	if (!(*node) || !(*node)->next || is_sorted(*node))
		return ;
	max_node = get_max_stack(*node);
	if (*node == max_node)
		ra(node);
	else if ((*node)->next == max_node)
		rra(node);
	if ((*node)->data > (*node)->next->data)
		sa(node);
}

static void	sort_elem(t_stack **node, t_stack **temp)
{
	int		len;

	if (!(*node) || !(*node)->next || is_sorted(*node))
		return ;
	len = lst_stack_len(*node);
	while (len > 3)
	{
		set_position(node);
		min_in_top(node, 'a');
		pb(node, temp);
		len--;
		if (len == 3)
			sort_three(node);
	}
	while (*temp != NULL)
		pa(temp, node);
}

void	little_sort(t_stack **node, t_stack **temp)
{
	int		len;

	if (!(*node) || !(*node)->next || is_sorted(*node))
		return ;
	len = lst_stack_len(*node);
	if (len <= 3)
		sort_three(node);
	else
		sort_elem(node, temp);
}
