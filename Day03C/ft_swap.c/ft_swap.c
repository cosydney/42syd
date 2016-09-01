/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 13:49:15 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/01 15:32:16 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}



int	main()
{
	int a;
	int b;

	int	*ptra;
	int *ptrb;
	ptra = &a;
	ptrb = &b;
	a = 10;
	b = 100;


	ft_swap(ptra, ptrb);
	printf("a : %d, pendant que b :%d", *ptra, *ptrb);
	return(0);
}

