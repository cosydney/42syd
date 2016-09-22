/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:32:42 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/22 14:09:10 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int is_in_string(char c, char *str, int i)
{
	while(str[i])
	{
		if (str[i] == c)
			return(i + 1);
		i++;
	}
	return (0);
}

int		ft_hidenp(char *str1,char *str2)
{
	int i;
	int f;

	i = 0;
	f = 0;
	while(str1[i])
	{
		f = is_in_string(str1[i], str2, f);
		if (f == 0)
			return (0);
		i++;
	}
	return(f);
}

int main(int ac, char **av)
{

	if (ac == 3)
	{
		if(ft_hidenp(av[1], av[2]))
			ft_putchar('1');
		else
			ft_putchar('0');
	}
	ft_putchar('\n');
	return (0);
}
