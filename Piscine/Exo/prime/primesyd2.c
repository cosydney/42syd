/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   primesyd2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 16:41:28 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/22 17:14:05 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


void	fprime(int nb)
{
	int i;

	i = 2;
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			printf("%i", i);
			nb = nb / i;
			if (nb != 1)
			{
				printf("*");
				i = 1;
			}
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
}
