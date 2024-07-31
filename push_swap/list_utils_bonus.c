/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 07:19:23 by fitrandr          #+#    #+#             */
/*   Updated: 2024/06/02 07:25:04 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

t_stack	*lst_last(t_stack *node)
{
	if (!node)
		return (NULL);
	while (node->next)
		node = node->next;
	return (node);
}

void	lst_append(t_stack **node, int data)
{
	t_stack	*new;
	t_stack	*last;

	new = malloc(sizeof(*new));
	if (!new)
		return ;
	new->data = data;
	new->next = NULL;
	if (!(*node))
	{
		*node = new;
		new->prev = NULL;
		return ;
	}
	last = lst_last(*node);
	last->next = new;
	new->prev = last;
}

int	lst_stack_len(t_stack *node)
{
	int	len;

	len = 0;
	while (node)
	{
		len++;
		node = node->next;
	}
	return (len);
}

void	lst_clear(t_stack **node)
{
	t_stack	*temp;

	if (!(*node))
		return ;
	while (*node)
	{
		temp = (*node)->next;
		free(*node);
		*node = temp;
	}
	*node = NULL;
}

int	lst_nb_occurence(t_stack *node, int data)
{
	int	i;

	i = 0;
	while (node)
	{
		if (node->data == data)
			i++;
		node = node->next;
	}
	return (i);
}
