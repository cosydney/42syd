/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 13:21:28 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/04 18:56:32 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "./ex00/ft_putstr.c"
#include "./ex01/ft_putnbr.c"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char hello[14] = "Bonjour Monde";

	printf("#--Ex00: ft_putstr--#\n");
	ft_putstr(hello);
	ft_putchar('\n');
	ft_putchar('\n');

	printf("#--Ex01: ft_putstr--#\n");
	int b, a;
	ft_putnbr(-2147483648);
		ft_putchar('\n');
	ft_putnbr(2147483647);
		ft_putchar('\n');
	for ( a = -100; a < 100; a++)
	{
		ft_putnbr(a);
		ft_putchar(' ');
	}

	printf("#--Ex02: ft_putstr--#\n");
	return (0);
}
