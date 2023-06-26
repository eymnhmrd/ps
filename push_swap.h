/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 22:38:19 by ahamrad           #+#    #+#             */
/*   Updated: 2023/06/26 02:03:59 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack {
	int				data;
	struct s_stack	*next;
}t_stack;

void	push(t_stack **a, int num);
void	pop(t_stack **a);
t_stack	*stack_last(t_stack *st);
t_stack	*stack_before_last(t_stack *st);
void	free_stack(t_stack **st);
int		stack_size(t_stack *st);
int		is_sorted(t_stack *st);

int		find_min(t_stack *st);
int		find_max(t_stack *st);
int		max_pos(t_stack *st);
int		min_pos(t_stack *st);
void	sort_three(t_stack **a);
void	sort_five(t_stack **stack_a, t_stack **stack_b);
int		*bubble_sort(int *tab, int size);
int		*fake_tab(t_stack *a);
void	algorithm1(t_stack **a, t_stack **b);
void	algorithm2(t_stack **a, t_stack **b);

void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);

int		ft_isdigit(int c);
void	ft_check_number(char *number, char **tab);
void	ft_check_duplicates(char **av, int count);
char	**join_args(char **av, int ac);
void	ft_check_limits(char *number, char **tab);
int		ft_check_arguments_limits(char **av, int count);

char	**ft_split(char const *s, char c);
char	*ft_strjoin(char *s1, char *s2);
void	free_tab2d(char **arr);
void	ft_error(void);
int		ft_tablen(char **tab);
int		ft_strlen(char *s);
long	ft_atoi(char *str);
void	ft_putstr(char *str);
void	ft_error_free(char **tab);

#endif