/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remplissage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 21:01:16 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/19 21:01:18 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int		ft_min(int a, int b, int c)
{
	if (a >= b && b <= c)
		return (b + 1);
	if (b >= a && a <= c)
		return (a + 1);
	return (c + 1);
}

void	ft_first_line(t_line *list, t_list *sq_props, t_coord *coord)
{
	int i;
	int k;

	i = 0;
	coord->x = 0;
	k = 0;
	while (i < sq_props->width)
	{
		if (((list)->str)[i] == sq_props->obstacle)
			((list)->str)[i] = '0';
		else if (((list)->str)[i] != '\n' &&
				((list)->str)[i] != sq_props->obstacle)
		{
			(((list))->str)[i] = '1';
			coord->max = 1;
			if (k < 10 && (((list))->str)[i] == '1')
			{
				coord->x = i;
				k = 11;
			}
			coord->y = 0;
		}
		i++;
	}
}

int		ft_set_coord(t_coord *coord, t_line *list, int i, int j)
{
	coord->y = j;
	coord->x = i;
	coord->max = ((list->next)->str)[i] - '0';
	return (((list->next)->str)[i]);
}

void	ft_fill_with_int(t_line *list, t_list *sq_props, int i)
{
	if (i == 0 && ((list->next)->str)[i] != sq_props->obstacle)
		((list->next)->str)[i] = '1';
	else if (((list->next)->str)[i] == sq_props->obstacle)
		((list->next)->str)[i] = '0';
	else if (((list->next)->str)[i] == sq_props->valid_char)
		((list->next)->str)[i] = ft_min((((list->next)->str)[i - 1]),
			(list->str)[i - 1], (list->str)[i]);
}

void	ft_remplissage(t_line *list, t_coord *coord, t_list *sq_props)
{
	int i;
	int j;
	int maxi;

	j = 1;
	maxi = '1';
	coord->max = '0';
	list = list->next;
	ft_first_line(list, sq_props, coord);
	while (list->next)
	{
		i = -1;
		while (++i <= sq_props->width)
		{
			ft_fill_with_int(list, sq_props, i);
			if (maxi < ((list->next)->str)[i])
				maxi = ft_set_coord(coord, list, i, j);
		}
		list = list->next;
		j++;
	}
}
