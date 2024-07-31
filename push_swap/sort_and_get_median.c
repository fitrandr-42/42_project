/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_and_get_median.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:23:36 by fitrandr          #+#    #+#             */
/*   Updated: 2024/05/14 16:56:12 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	extract_stack_element(t_stack *node, int **tab)
{
	int	len;
	int	i;

	len = lst_stack_len(node);
	*tab = malloc(sizeof(int) * len);
	if (!(*tab))
		return (-1);
	i = 0;
	while (node && i < len)
	{
		(*tab)[i] = node->data;
		node = node->next;
		i++;
	}
	return (0);
}

int	sort_and_get_median(t_stack *node)
{
	int	*tab;
	int	j;
	int	i;
	int	val;
	int	result;

	extract_stack_element(node, &tab);
	i = 1;
	while (i < lst_stack_len(node))
	{
		val = tab[i];
		j = i;
		while (j > 0 && tab[j -1] > val)
		{
			tab[j] = tab[j - 1];
			j--;
		}
		tab[j] = val;
		i++;
	}
	result = tab[lst_stack_len(node) / 2];
	return (free(tab), result);
}
