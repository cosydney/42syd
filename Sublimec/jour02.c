/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jour02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 22:08:53 by sycohen           #+#    #+#             */
/*   Updated: 2016/08/31 20:40:22 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int ft_nputchar(char c, int n)
{
	int i;
	i = 0; 
	while (i < n)
		{
			ft_putchar(c);
			i = i + 1;
		}
	return (0);
}
int main()
{
	ft_nputchar('@', 42);
	ft_putchar('\n');
	return(0); 
}

