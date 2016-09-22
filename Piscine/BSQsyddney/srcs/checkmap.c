/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 20:59:34 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/19 20:59:36 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_bsq.h"

int		ft_check(char c, t_list *info, int j, int *hauteur)
{
	if (c != (*info).obstacle && c != (*info).valid_char && c != '\n')
		return (1);
	if (c == '\n')
	{
		(*hauteur)++;
		if ((*info).width != j)
			return (1);
		(*info).width = 0;
	}
	if (c != '\n')
		(*info).width++;
	return (0);
}

void	ft_error(void)
{
	write(2, "map error\n", 10);
}
