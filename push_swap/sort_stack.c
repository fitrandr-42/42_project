/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 08:44:12 by fitrandr          #+#    #+#             */
/*   Updated: 2024/05/21 11:31:10 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_stack **node)
{
	int		len;
	t_stack	*b;

	if (is_sorted(*node))
		return ;
	b = NULL;
	len = lst_stack_len(*node);
	if (len <= 5)
		little_sort(node, &b);
	else
		large_sort(node, &b);
}
