/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 09:00:53 by fitrandr          #+#    #+#             */
/*   Updated: 2024/05/21 12:40:25 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	initialize_target(t_stack **node, t_stack **temp_node)
{
	t_stack	*temp;
	t_stack	*temp2;

	temp = *node;
	while (temp)
	{
		temp->target_position = -1;
		temp = temp->next;
	}
	temp2 = *temp_node;
	while (temp2)
	{
		temp2->target_position = -1;
		temp2 = temp2->next;
	}
}

static void	search_target(t_stack **node, t_stack **temp_node)
{
	t_stack	*temp;
	t_stack	*temp2;
	long	best_match;

	temp = *temp_node;
	while (temp)
	{
		temp2 = *node;
		best_match = LONG_MAX;
		while (temp2)
		{
			if ((temp2->data > temp->data) && (temp2->data < best_match))
			{
				temp->target_position = temp2->position;
				best_match = temp2->data;
			}
			temp2 = temp2->next;
		}
		if (temp->target_position == -1)
		{
			temp2 = get_min_stack(*node);
			temp->target_position = temp2->position;
		}
		temp = temp->next;
	}
}

static void	finish_rotation(t_stack **node, int price, char c)
{
	if (price < 0 && c == 'a')
	{
		while (++price <= 0)
			rra(node);
	}
	else if (price > 0 && c == 'a')
	{
		while (--price >= 0)
			ra(node);
	}
	else if (price < 0 && c == 'b')
	{
		while (++price <= 0)
			rrb(node);
	}
	else if (price > 0 && c == 'b')
	{
		while (--price >= 0)
			rb(node);
	}
}

static void	move_b_to_a(t_stack **node, t_stack **temp, int position)
{
	t_stack	*element;
	t_stack	*target;

	element = get_node(*temp, position);
	target = get_node(*node, element->target_position);
	while (target->price < 0 && element->price < 0)
	{
		rrr(node, temp);
		target->price++;
		element->price++;
	}
	while (target->price > 0 && element->price > 0)
	{
		rr(node, temp);
		target->price--;
		element->price--;
	}
	if (target->price != 0)
		finish_rotation(node, target->price, 'a');
	if (element->price != 0)
		finish_rotation(temp, element->price, 'b');
}

void	push_b_to_a(t_stack **node, t_stack **temp)
{
	int	cheapest_position;

	while (*temp != NULL)
	{
		set_position(node);
		set_position(temp);
		set_price(node, temp);
		initialize_target(node, temp);
		search_target(node, temp);
		cheapest_position = find_cheapest(*node, *temp);
		move_b_to_a(node, temp, cheapest_position);
		pa(temp, node);
	}
	min_in_top(node, 'a');
}
