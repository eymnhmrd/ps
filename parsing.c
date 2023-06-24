/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:51:47 by ahamrad           #+#    #+#             */
/*   Updated: 2023/06/25 00:28:36 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	ft_check_number(char *number, char **tab)
{
	int	i;

	i = 0;
	while (number[i] && number[i] == ' ')
		i++;
	if ((number[i] == '+' || number[i] == '-'))
		i++;
	if (!number[i])
		ft_error_free(tab);
	while (number[i])
	{
		if (!ft_isdigit(number[i]))
			ft_error_free(tab);
		i++;
	}
}
