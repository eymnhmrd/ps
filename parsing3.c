/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 02:47:06 by ahamrad           #+#    #+#             */
/*   Updated: 2023/06/25 06:26:22 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error_free(char **tab)
{
	free_tab2d(tab);
	ft_putstr("Error\n");
	exit(EXIT_FAILURE);
}

void	ft_error(void)
{
	ft_putstr("Error\n");
	exit(EXIT_FAILURE);
}

int	ft_tablen(char **tab)
{
	int	i;

	i = 0;
	if (!tab)
		return (0);
	while (tab[i])
		i++;
	return (i);
}

void	ft_check_arg_space(char *number)
{
	int	i;
	int	space;

	i = 0;
	space = 0;
	while (number[i])
	{
		if (number[i] == ' ')
			space++;
		i++;
	}
	if (space == i)
		ft_error();
}

char	**join_args(char **av, int ac)
{
	char	**new_av;
	char	*total;
	int		i;

	i = 1;
	total = malloc(sizeof(char));
	if (!total)
		exit(EXIT_FAILURE);
	total[0] = '\0';
	while (i <= ac)
	{
		ft_check_arg_space(av[i]);
		if (!av[i][0])
			ft_error();
		total = ft_strjoin(total, av[i]);
		total = ft_strjoin(total, " ");
		i++;
	}
	new_av = ft_split(total, ' ');
	if (total)
		free(total);
	return (new_av);
}
