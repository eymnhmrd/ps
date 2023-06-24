/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 22:45:26 by ahamrad           #+#    #+#             */
/*   Updated: 2023/06/22 01:58:50 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	**ft_allocation_error(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i++]);
	}
	free(arr);
	return (NULL);
}

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

static char	*ft_get_word(char **s, char c)
{
	int		i;
	int		len;
	char	*str;

	while (**s == c)
		(*s)++;
	i = 0;
	len = 0;
	while ((*s)[len] != c && (*s)[len])
		len++;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = (*s)[i];
		i++;
	}
	str[i] = '\0';
	*s += len;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*str;
	int		i;
	int		len;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_count_words(s, c);
	arr = (char **)malloc(sizeof(char *) * (len + 1));
	if (!arr)
		return (NULL);
	str = (char *)s;
	while (i < len)
	{
		arr[i] = ft_get_word(&str, c);
		if (!arr[i])
			return (ft_allocation_error(arr));
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
