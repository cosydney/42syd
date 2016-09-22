/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 14:30:42 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/22 15:35:22 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int is_prime(int nb)
{
	int i;

	i = 2;
	while(i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int add_prime_sum(int nb)
{
	int i;
	int prime;

	i = 2;
	prime = 0;
	while (i <= nb)
	{
		if (is_prime(i) == 1)
			prime += i;
		i++;
	}
	return (prime);
}

int main(int ac, char **av)
{
	if (ac != 2)
		printf("%i", 0);
	else
		printf("%i", add_prime_sum(atoi(av[1])));
}
