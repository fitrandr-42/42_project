/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 07:27:34 by fitrandr          #+#    #+#             */
/*   Updated: 2024/06/02 10:00:34 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static void	compare(char *line, t_stack **node, t_stack **b)
{
	if (!ft_strcmp(line, "ra\n"))
		ra(node);
	else if (!ft_strcmp(line, "rb\n"))
		rb(b);
	else if (!ft_strcmp(line, "rr\n"))
		rr(node, b);
	else if (!ft_strcmp(line, "rra\n"))
		rra(node);
	else if (!ft_strcmp(line, "rrb\n"))
		rrb(b);
	else if (!ft_strcmp(line, "rrr\n"))
		rrr(node, b);
	else if (!ft_strcmp(line, "pa\n"))
		pa(b, node);
	else if (!ft_strcmp(line, "pb\n"))
		pb(node, b);
	else if (!ft_strcmp(line, "sa\n"))
		sa(node);
	else if (!ft_strcmp(line, "sb\n"))
		sb(b);
	else if (!ft_strcmp(line, "ss\n"))
		ss(node, b);
}

void	sort_stack(t_stack **node)
{
	char	*line;
	t_stack	*b;

	b = NULL;
	line = get_next_line();
	while (line != NULL && line[0] != '\n')
	{
		compare(line, node, &b);
		free(line);
		line = get_next_line();
	}
	if (is_sorted(*node))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
