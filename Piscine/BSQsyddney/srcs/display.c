/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 20:59:43 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/19 20:59:46 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_bsq.h"

void	ft_display(char **tab, t_list *sq_props)
{
	int i;
	int j;

	i = 0;
	while (i < (*sq_props).height)
	{
		j = 0;
		while (tab[i][j])
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		i++;
	}
}
