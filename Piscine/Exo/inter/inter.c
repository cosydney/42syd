/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 21:14:13 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/16 11:05:12 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int is_first(char *str, char c, int len)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			break;
		i++;
	}
	if (i == len)
		return (1);
	return (0);
}

int	is_instring(char *str, char c)
{
	int i; 

	i = 0;
	while(str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}


void	inter( char *str, char *str2)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (is_instring(str2, str[i]) && is_first(str, str[i], i))
			ft_putchar(str[i]);
		i++;
	}
}


int main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	j = 0;

	if (ac != 3)
		ft_putchar('\n');
	else
		inter(av[1], av[2]);
	return (0);
}
