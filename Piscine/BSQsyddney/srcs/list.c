/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 21:00:45 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/19 21:00:47 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

t_line	*ft_create_elem(int *str)
{
	t_line	*elem;

	elem = (t_line *)malloc(sizeof(t_line));
	if (elem)
	{
		elem->str = str;
		elem->next = NULL;
	}
	return (elem);
}

t_line	*ft_line_push_back(t_line *list, int *str)
{
	t_line *first;

	first = list;
	while ((list)->next)
		(list) = (list)->next;
	(list)->next = ft_create_elem(str);
	return (first);
}
