/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:53:42 by fitrandr          #+#    #+#             */
/*   Updated: 2024/05/14 08:16:43 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	lst_push(t_stack **src, t_stack **dest)
{
	t_stack	*temp;

	if (!(*src))
		return ;
	temp = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	temp->prev = NULL;
	if (!(*dest))
	{
		*dest = temp;
		temp->next = NULL;
	}
	else
	{
		temp->next = *dest;
		(*dest)->prev = temp;
		*dest = temp;
	}
}

void	pa(t_stack **src, t_stack **dest)
{
	lst_push(src, dest);
	write (1, "pa\n", 3);
}

void	pb(t_stack **src, t_stack **dest)
{
	lst_push(src, dest);
	write (1, "pb\n", 3);
}
