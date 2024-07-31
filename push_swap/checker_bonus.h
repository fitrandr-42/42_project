/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 06:57:05 by fitrandr          #+#    #+#             */
/*   Updated: 2024/06/02 09:54:16 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_node
{
	int				data;
	struct s_node	*next;
	struct s_node	*prev;
}					t_stack;

char	**ft_split(char const *s, char c);
void	free_tab(char **tab, size_t i);
void	init_stack(t_stack **node, char **argv);
int		ft_isdigit(int c);
int		size_tab(char **argv);
void	error(void);
t_stack	*lst_last(t_stack *node);
void	lst_append(t_stack **node, int data);
int		lst_stack_len(t_stack *node);
void	lst_clear(t_stack **node);
int		lst_nb_occurence(t_stack *node, int data);
long	ft_atol(const char *nptr);
void	sort_stack(t_stack **node);
void	pa(t_stack **src, t_stack **dest);
void	pb(t_stack **src, t_stack **dest);
void	rra(t_stack **node);
void	rrb(t_stack **node);
void	rrr(t_stack **node, t_stack **node2);
void	ra(t_stack	**node);
void	rb(t_stack **node);
void	rr(t_stack **node, t_stack **node2);
int		is_sorted(t_stack *node);
char	*get_next_line(void);
int		ft_strcmp(const char *str1, const char *str2);
void	sa(t_stack **node);
void	sb(t_stack **node);
void	ss(t_stack **node, t_stack **node2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
#endif