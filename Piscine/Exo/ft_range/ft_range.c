/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 18:41:02 by exam              #+#    #+#             */
/*   Updated: 2016/09/18 21:17:56 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	unsigned int i;
	int *tab;

	i = 0;
	tab = NULL;
	if (start < end)
	{
	if( !(tab = (int *)malloc(sizeof(int) * (end - start + 2))))
		return NULL;
		while (start <= end)
		{
			tab[i] = start;
			i++;
			start++;
		}
	return (tab);
	}
	i = 0;
	if (start > end)
	{
	if( !(tab = (int *)malloc(sizeof(int) * (start - end + 2))))
		return NULL;
		while (start >= end)
		{
			tab[i] = start;
			i++;
			start--;
		}
	return (tab);
	}
	else
		return(0);
}
#include <stdio.h>
int main(void)
{
	int i;

	i = 0;
	int *tab;
	
	tab = ft_range(-2147483640, -2147483646);
	while(i < 6)
	{
		printf("%i \n", tab[i++]);
	}
}
