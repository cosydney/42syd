/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 15:11:11 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/01 15:39:35 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

int	main()
{
	int a;
	int b;
	int	*div;
	int *mod;
	int c;
	int d;

	div = &c;
	mod = &d;

	a = 10;
	b = 4;
	ft_div_mod(a, b, div, mod);

	printf("on divise a : %d / %d par b ", a, b);
	printf("Le resultat est de %d et le modulo est de %d\n", *div, *mod);
	return(0);
}
