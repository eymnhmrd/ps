/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 02:42:18 by ahamrad           #+#    #+#             */
/*   Updated: 2023/06/21 04:25:52 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *st)
{
	t_stack	*p;

	p = st;
	while (p->next)
	{
		if (p->data > p->next->data)
			return (0);
		p = p->next;
	}
	return (1);
}

int	stack_size(t_stack *st)
{
	t_stack		*p;
	int			i;

	i = 0;
	p = st;
	while (p)
	{
		i++;
		p = p->next;
	}
	return (i);
}

void	free_stack(t_stack **st)
{
	t_stack	*tmp;

	while (*st)
	{
		tmp = *st;
		*st = (*st)->next;
		free(tmp);
	}
	*st = NULL;
}
