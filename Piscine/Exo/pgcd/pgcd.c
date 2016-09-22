/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 21:17:40 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/20 21:33:32 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	pgcd(int n, int nb)
{
	int i;
	if (nb > n)
		i = nb;
	else
		i = n;
	while (i != 0) 
	{
		if (n % i == 0 && nb % i == 0)
			return(i);
		i--;
	}
	return(i);
}


int	main(int ac, char **av)
{
	if (ac != 3)
		printf("\n");
	else
		printf("%i", pgcd(atoi(av[1]), atoi(av[2])));
	return (0);
}
