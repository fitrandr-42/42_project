/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 07:28:45 by fitrandr          #+#    #+#             */
/*   Updated: 2024/05/23 11:44:33 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>

typedef struct s_node
{
	int				data;
	bool			is_lis;
	int				length;
	int				position;
	int				price;
	int				target_position;
	struct s_node	*lis_prev;
	struct s_node	*next;
	struct s_node	*prev;
}					t_stack;

int		lst_stack_len(t_stack *node);
int		size_tab(char **argv);
int		ft_abs(int nbr);
int		find_cheapest(t_stack *node, t_stack *temp);
int		ft_isdigit(int c);
int		lst_nb_occurence(t_stack *node, int data);
int		sort_and_get_median(t_stack *node);
int		is_sorted(t_stack *node);
void	free_tab(char **tab, size_t i);
void	push_b_to_a(t_stack **node, t_stack **temp);
void	set_price(t_stack **node, t_stack **temp);
void	little_sort(t_stack **node, t_stack **temp);
void	large_sort(t_stack **s_node, t_stack **temp);
t_stack	*lst_last(t_stack *node);
t_stack	*get_node(t_stack *node, int position);
t_stack	*get_max_stack(t_stack *node);
long	ft_atol(const char *nptr);
void	sort_stack(t_stack **node);
void	min_in_top(t_stack	**node, char c);
t_stack	*get_min_stack(t_stack *node);
void	set_position(t_stack **node);
void	lis(t_stack **node);
void	separate_lis(t_stack **node, t_stack **temp, int mediane);
void	init_stack(t_stack **node, char **argv);
void	lst_clear(t_stack **node);
void	lst_append(t_stack **node, int data);
void	pa(t_stack **src, t_stack **dest);
void	pb(t_stack **src, t_stack **dest);
void	rra(t_stack **node);
void	rrb(t_stack **node);
void	rrr(t_stack **node, t_stack **node2);
void	ra(t_stack	**node);
void	rb(t_stack **node);
void	rr(t_stack **node, t_stack **node2);
void	sa(t_stack **node);
void	sb(t_stack **node);
void	ss(t_stack **node, t_stack **node2);
void	error(void);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
