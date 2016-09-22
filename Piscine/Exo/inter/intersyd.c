/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersyd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 11:05:17 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/21 22:39:18 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int is_first(char *str, char c, int length)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			break;
		i++;
	}
	if (length == i)
		return (1);
	return (0);
}

int is_instring(char *str, char c)
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

void	inter(char *str1, char *str2)
{
	int i;
	
	i = 0;
	while(str1[i])
	{
		if (is_instring(str2, str1[i]) && is_first(str1, str1[i], i))
			ft_putchar(str1[i]);
		i++;
	}

}


int	main(int ac, char **av)
{
	if (ac != 3)
		ft_putchar(' ');
	else
		inter(av[1], av[2]);
	return (0);
}
