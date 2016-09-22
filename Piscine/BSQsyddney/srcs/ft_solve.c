/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 21:00:28 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/19 21:00:29 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void	ft_fill_whitout_valid_char(int *str, t_list *sq_props)
{
	int i;

	i = 0;
	while (i <= sq_props->width)
	{
		if (str[i] == '0')
			str[i] = (*sq_props).obstacle;
		else if (str[i] != '\n')
			str[i] = (*sq_props).valid_char;
		i++;
	}
}

void	ft_fill_solution(int *str, t_list *sq_props, t_coord *coord, int x)
{
	int i;

	i = 0;
	while (i <= sq_props->width)
	{
		if (i < x || i >= x + (*coord).max)
		{
			if (str[i] == '0')
				str[i] = (*sq_props).obstacle;
			else if (str[i] != '\n')
				str[i] = (*sq_props).valid_char;
		}
		else
			str[i] = (*sq_props).plain_char;
		i++;
	}
}

void	ft_solve_grid(t_line *line, t_list *sq_props, t_coord *coord)
{
	int x;
	int y;
	int i;

	i = 0;
	if (coord->max == 0 && coord->x == 0 && coord->y == 0)
	{
		x = 0;
		y = 0;
		coord->max = 1;
	}
	else
	{
		x = coord->x - coord->max + 1;
		y = coord->y - coord->max + 1;
	}
	while (line->next)
	{
		if (i < y || i >= y + (*coord).max)
			ft_fill_whitout_valid_char((line->next)->str, sq_props);
		else
			ft_fill_solution((line->next)->str, sq_props, coord, x);
		line = (line)->next;
		i++;
	}
}
