/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 16:59:46 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/21 18:13:10 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	if (begin_list)
	{
		while(begin_list)
		{
			i++;
			begin_list = begin_list->next;
		}
	}
	return(i);
}
