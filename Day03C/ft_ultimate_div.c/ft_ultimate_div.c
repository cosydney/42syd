/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 15:45:58 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/01 16:09:55 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = (*a / *b);
	mod = (*a % *b);

	*a = div;
	*b = mod;

}

int	main()
{
	int a;
	int b;

	a = 100;
	b = 42;

	printf("on divise a : %d / %d par b ", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Le resultat est de %d et le modulo est de %d\n", a, b);

	return(0);
}
