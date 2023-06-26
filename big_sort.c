/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 01:30:52 by ahamrad           #+#    #+#             */
/*   Updated: 2023/06/26 02:03:06 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*bubble_sort(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

int min_pos(t_stack *st)
{
	int	indice;
	int	min_value;

	indice = 1;
	min_value = find_min(st);
	while (st && st->next && st->data != min_value)
	{
		indice++;
		st = st->next;
	}
	return (indice);
}

int	max_pos(t_stack *st)
{
	int	indice;
	int	max_value;

	indice = 1;
	max_value = find_max(st);
	while (st && st->next && st->data != max_value)
	{
		indice++;
		st = st->next;
	}
	return (indice);
}

int	*fake_tab(t_stack *a)
{
	int	size;
	int	*tab;
	int	i;

	i = 0;
	size = stack_size(a);
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	while (a)
	{
		tab[i] = a->data;
		i++;
		a = a->next;
	}
	tab = bubble_sort(tab, size);
	return (tab);
}

void	algorithm1(t_stack **a, t_stack **b)
{
	int	*tab;
	int	var1;
	int	var2;
	int	size;

	size = stack_size(*a);
	while (size && *a)
	{
		size = stack_size(*a);
		tab = fake_tab(*a);
		var1 = tab[size / 7];
		var2 = tab[(size / 7) / 2];
		if ((*a)->data <= var2)
			pb(a, b);
		else if ((*a)->data <= var1)
		{
			pb(a, b);
			rb(b);
		}
		else
			ra(a);
		free(tab);
	}
}

void	algorithm2(t_stack **a, t_stack **b)
{
	int	max;
	int	size;
	int	pos;

	size = stack_size(*b);
	max = find_max(*b);
	pos = max_pos(*b);
	while (size && *b)
	{
		size = stack_size(*b);
		max = find_max(*b);
		pos = max_pos(*b);
		if (pos >= (size / 2))
		{
			while ((*b)->data != max)
				rrb(b);
		}
		else
		{
			while ((*b)->data != max)
				rb(b);
		}
		pa(a, b);
	}
}
