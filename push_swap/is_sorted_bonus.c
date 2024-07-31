/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 07:48:31 by fitrandr          #+#    #+#             */
/*   Updated: 2024/06/02 07:48:44 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
