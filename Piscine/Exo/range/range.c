/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 15:42:27 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/16 15:55:45 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int i;
	int *tab;
	
	i = 0;
	tab = (int *)malloc(sizeof(int) * (end - (start)));

	if (start > end)
		return (0);
	else
	{
		while (start <= end)
		{
			tab[i] = start;
			start++;
			i++;
		}
		return (tab);
	}
	return (0);
}


int main(void)
{
	int i;
	i = 0;
	int *tab;

	tab = ft_range(2, 34);
	while (tab[i + 1])
	{
		printf("%i \n", tab[i]);
		i++;
	}
	return (0);
}
