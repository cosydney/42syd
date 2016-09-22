/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 14:02:21 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/16 14:42:53 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	unsigned int i;
	int maxi;

	i = 0;
	maxi = tab[0];

	while (i < len)
	{
		if (tab[i] > maxi)
			maxi = tab[i];
		i++;
	}	
	return (maxi);
}

#include <stdio.h>

int main()
{
	int tab[40];
	int i; 
	i = 0;
	while (i++ < 20)
	{
		tab[i] = i;
		}
	tab[4] = 40;

	printf("%i \n", max(tab, 10));
}


/*
int		max(int *tab, unsigned int len)
{
	unsigned int	cmp;
	int				cpy;

	cmp = 0;
	cpy = tab[0];
	while (cmp < len)
	{
		if (cpy < tab[cmp])
			cpy = tab[cmp];
		++cmp;
	}
	if (cmp == len)
		return (cpy);
	return (0);
*/
