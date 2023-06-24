/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 02:44:16 by ahamrad           #+#    #+#             */
/*   Updated: 2023/06/21 04:35:16 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **a)
{
	t_stack	*before_last;

	if (!(*a) || !(*a)->next)
		return ;
	before_last = stack_before_last(*a);
	before_last->next->next = *a;
	*a = before_last->next;
	before_last->next = NULL;
	ft_putstr("rra\n");
}

void	rrb(t_stack **b)
{
	t_stack	*before_last;

	if (!(*b) || !(*b)->next)
		return ;
	before_last = stack_before_last(*b);
	before_last->next->next = *b;
	*b = before_last->next;
	before_last->next = NULL;
	ft_putstr("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a);
	rrb(b);
	ft_putstr("rrr\n");
}
