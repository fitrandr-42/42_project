/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 10:07:03 by fitrandr          #+#    #+#             */
/*   Updated: 2024/05/16 08:51:47 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *node)
{
	t_stack	*temp;

	if (!node ||!node->next)
		return (1);
	while (node && node->next)
	{
		temp = node->next;
		if (node->data > temp->data)
			return (0);
		node = node->next;
	}
	return (1);
}
