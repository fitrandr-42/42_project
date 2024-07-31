/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 08:22:06 by fitrandr          #+#    #+#             */
/*   Updated: 2024/05/21 11:45:17 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_position(t_stack **node)
{
	t_stack	*temp;
	int		i;

	if (!(*node))
		return ;
	temp = *node;
	i = 0;
	while (temp)
	{
		temp->position = i;
		i++;
		temp = temp->next;
	}
}

t_stack	*get_min_stack(t_stack *node)
{
	int		min;
	t_stack	*min_stack;

	if (!node)
		return (NULL);
	min = INT_MAX;
	min_stack = NULL;
	while (node)
	{
		if (min > node->data)
		{
			min = node->data;
			min_stack = node;
		}
		node = node->next;
	}
	return (min_stack);
}

t_stack	*get_max_stack(t_stack *node)
{
	int		max;
	t_stack	*max_stack;

	if (!node)
		return (NULL);
	max = INT_MIN;
	max_stack = NULL;
	while (node)
	{
		if (max < node->data)
		{
			max = node->data;
			max_stack = node;
		}
		node = node->next;
	}
	return (max_stack);
}

t_stack	*get_node(t_stack *node, int position)
{
	while (node)
	{
		if (node->position == position)
			return (node);
		node = node->next;
	}
	return (NULL);
}

void	set_price(t_stack **node, t_stack **dest)
{
	t_stack	*temp;
	t_stack	*temp2;
	int		len;

	temp = *node;
	temp2 = *dest;
	len = lst_stack_len(*node);
	while (temp)
	{
		if (temp->position < (len / 2))
			temp->price = temp->position;
		else
			temp->price = temp->position - len;
		temp = temp->next;
	}
	len = lst_stack_len(*dest);
	while (temp2)
	{
		if (temp2->position < (len / 2))
			temp2->price = temp2->position;
		else
			temp2->price = temp2->position - len;
		temp2 = temp2->next;
	}
}
