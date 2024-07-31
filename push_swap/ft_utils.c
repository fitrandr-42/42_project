/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:04:33 by fitrandr          #+#    #+#             */
/*   Updated: 2024/05/21 12:05:02 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_abs(int nbr)
{
	if (nbr < 0)
		nbr *= -1;
	return (nbr);
}

int	find_cheapest(t_stack *node, t_stack *temp)
{
	int		position;
	int		total;
	t_stack	*target;
	long	cheapest;

	position = -1;
	target = NULL;
	cheapest = LONG_MAX;
	while (temp)
	{
		target = get_node(node, temp->target_position);
		total = ft_abs(target->price) + ft_abs(temp->price);
		if (total < cheapest)
		{
			cheapest = total;
			position = temp->position;
		}
		temp = temp->next;
	}
	return (position);
}
