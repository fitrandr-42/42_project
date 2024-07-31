/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:23:40 by fitrandr          #+#    #+#             */
/*   Updated: 2024/05/23 11:22:06 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	size_tab(char **argv)
{
	int	size;

	size = 0;
	while (argv[size])
		size++;
	return (size);
}

static int	syntax_error(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	if (str[0] == '+' || str[0] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}

void	init_stack(t_stack **node, char **argv)
{
	int		i;
	long	nbr;

	i = 0;
	while (argv[i])
	{
		if (syntax_error(argv[i]))
		{
			lst_clear(node);
			free_tab(argv, size_tab(argv));
			error();
		}
		nbr = ft_atol(argv[i]);
		if (nbr < INT_MIN || nbr > INT_MAX || lst_nb_occurence(*node, nbr) > 0)
		{
			lst_clear(node);
			free_tab(argv, size_tab(argv));
			error();
		}
		lst_append(node, (int)nbr);
		i++;
	}
	free_tab(argv, size_tab(argv));
}
