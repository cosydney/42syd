/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 20:47:43 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/20 21:17:20 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void doop(int nb, char *c, int n)
{
	if (c[0] == '+')
		printf("%i\n", nb+n);	
	if (c[0] == '-')
		printf("%i\n", nb - n);	
	if (c[0] == '%')
		printf("%i\n", nb % n);	
	if (c[0] == '/')
		printf("%i\n", nb / n);	
	if (c[0]	== '*')
		printf("%i\n", nb * n);	
}





int main(int ac, char **av)
{
	if (ac != 4)
		printf("coucou");
	else
		doop(atoi(av[1]),av[2], atoi(av[3]));	
	return (0);
}
