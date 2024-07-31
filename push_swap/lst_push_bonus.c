/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_push_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 07:30:36 by fitrandr          #+#    #+#             */
/*   Updated: 2024/06/02 07:31:23 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
}

void	pb(t_stack **src, t_stack **dest)
{
	lst_push(src, dest);
}
