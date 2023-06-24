/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 02:40:51 by ahamrad           #+#    #+#             */
/*   Updated: 2023/06/23 05:51:37 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **a, int num)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return ;
	node->data = num;
	node->next = NULL;
	if (*a == NULL)
		*a = node;
	else
	{
		node->next = *a;
		*a = node;
	}
}

void	pop(t_stack **a)
{
	t_stack	*tmp;

	if (!(*a))
		return ;
	tmp = *a;
	*a = (*a)->next;
	free(tmp);
}

t_stack	*stack_last(t_stack *st)
{
	t_stack	*last;

	last = st;
	while (last && last->next)
		last = last->next;
	return (last);
}

t_stack	*stack_before_last(t_stack *st)
{
	t_stack	*before_last;

	before_last = st;
	while (before_last->next->next)
		before_last = before_last->next;
	return (before_last);
}
