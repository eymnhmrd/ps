/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 01:00:58 by ahamrad           #+#    #+#             */
/*   Updated: 2023/06/24 02:35:21 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_duplicates(char **av, int ac)
{
	int	i;
	int	j;

	i = 0;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if ((ft_atoi(av[i]) == ft_atoi(av[j])))
				ft_error();
			j++;
		}
		i++;
	}
}

void	ft_check_limits(char *number, char **tab)
{
	if (ft_strlen(number) > 11 || ft_atoi(number) > INT_MAX
		|| ft_atoi(number) < INT_MIN)
		ft_error_free(tab);
}
