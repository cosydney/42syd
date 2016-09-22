/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 17:28:21 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/22 18:54:07 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int *tab;
	unsigned int i;

	i = 0;
	tab = NULL;
	if (start < end)
	{
		if(!(tab = (int*)malloc(sizeof(int) * 1000)))
			return (NULL);
		while (start <= end)
		{
			tab[i] = start;
			start++;
			i++;
		}
		return (tab);
	}

	if (start > end)
	{
		if(!(tab = (int*)malloc(sizeof(int) * 1000)))
			return (NULL);
		while (start >= end)
		{
			tab[i] = start;
			start--;
			i++;
		}
		return (tab);
	}
	return (0);
}


#include <stdio.h>
int main(void)
{
	int i;

	i = 0;
	int *tab;

	//tab = ft_range(-2147483640, -2147483646);
	tab = ft_range(-66 , -75);
	while(i < 10)
	{
		printf("%i \n", tab[i]);
		i++;
	}
}
