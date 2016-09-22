/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   restr_capitalizer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 10:07:45 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/22 14:23:36 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int next_word(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' || str[i] != '\t' || str[i] != '\0')
			return (1);
		i++;
	}
	return (0);
}

int last_character(char *str, int i)
{
	if (str[i - 1] == ' ' || str[i - 1] == '\t')
		return (1);
	return (0);
}

void ft_capitalizer(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (last_character(str, i))
				ft_putchar(uppercase(str[i]));
		else
			ft_putchar(lowercase(str[i]));
		i++;
	}
}

int main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac == 1)
		ft_putchar('\n');
	else
		while( i < ac)
		{
			ft_capitalizer(av[i]);
			ft_putchar('\n');
			i++;
		}
	return (0);
}
