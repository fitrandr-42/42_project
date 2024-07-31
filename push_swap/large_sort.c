/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   large_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 12:53:37 by fitrandr          #+#    #+#             */
/*   Updated: 2024/05/21 12:37:22 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	large_sort(t_stack **node, t_stack **temp)
{
	int	mediane;

	if (is_sorted(*node) || !(*node))
		return ;
	mediane = sort_and_get_median(*node);
	lis(node);
	separate_lis(node, temp, mediane);
	push_b_to_a(node, temp);
}
