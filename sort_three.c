/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 01:26:09 by ahamrad           #+#    #+#             */
/*   Updated: 2023/06/26 03:24:42 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

int	find_min(t_stack *st)
{
	int	min;

	min = st->data;
	while (st && st->next)
	{
		if (min > st->next->data)
			min = st->next->data;
		st = st->next;
	}
	return (min);
}

int	find_max(t_stack *st)
{
	int	max;

	max = st->data;
	while (st && st->next)
	{
		if (max < st->next->data)
			max = st->next->data;
		st = st->next;
	}
	return (max);
}

void	sort_three(t_stack **a)
{
	if ((*a)->next->data == find_max(*a))
		rra(a);
	if ((*a)->data != find_max(*a) && (*a)->data != find_min(*a))
		sa(a);
	if ((*a)->data == find_max(*a))
	{
		if ((*a)->next->data == find_min(*a))
			ra(a);
		else
		{
			ra(a);
			sa(a);
		}
	}
}
