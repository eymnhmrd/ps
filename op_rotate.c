/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 02:44:14 by ahamrad           #+#    #+#             */
/*   Updated: 2023/06/21 22:30:48 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a)
{
	t_stack	*p;
	t_stack	*last;

	if (!(*a) || !(*a)->next)
		return ;
	p = *a;
	last = stack_last(*a);
	*a = (*a)->next;
	last->next = p;
	p->next = NULL;
	ft_putstr("ra\n");
}

void	rb(t_stack **b)
{
	t_stack	*p;
	t_stack	*last;

	if (!(*b) || !(*b)->next)
		return ;
	p = *b;
	last = stack_last(*b);
	*b = (*b)->next;
	last->next = p;
	p->next = NULL;
	ft_putstr("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	ra(a);
	rb(b);
	ft_putstr("rr\n");
}
