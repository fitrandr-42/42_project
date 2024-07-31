/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 07:07:34 by fitrandr          #+#    #+#             */
/*   Updated: 2024/06/02 09:58:25 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static void	check_empty_arg(char **str, t_stack **node)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i][j])
		{
			if (str[i][j] != ' ')
				return ;
			j++;
		}
		i++;
	}
	free_tab(str, size_tab(str));
	lst_clear(node);
	error();
}

int	main(int argc, char *argv[])
{
	t_stack	*a;
	char	**str;
	int		i;

	a = NULL;
	i = 0;
	if (argc == 1)
		return (1);
	if (argc >= 2)
	{
		while (argv[++i])
		{
			str = ft_split(argv[i], ' ');
			check_empty_arg(str, &a);
			init_stack(&a, str);
		}
	}
	sort_stack(&a);
	lst_clear(&a);
	return (0);
}
