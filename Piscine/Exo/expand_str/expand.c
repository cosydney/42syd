/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expandsydney.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 10:37:05 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/20 11:00:01 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_trim(char *str)
{
	int i;

	i = 0;
	while(str[0] == ' ' || str[0] == '\t')
	{
		i = 0;
		while(str[i++])
			str[i - 1] = str[i];
	}
	str[i - 1] = '\0';
	return (str);
}

void	ft_print(char *str)
{
	int i;
	int space;

	i = 0;
	space = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			space = 1;
		else 
		{
			if (space)
			{
				ft_putchar(' ');
				ft_putchar(' ');
				ft_putchar(' ');
				space = 0;
			}
			if (str[i] != ' ' || str[i] != '\t')
				ft_putchar(str[i]);
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if(ac != 2)
		ft_putchar('\n');
	else
	{
		ft_print(ft_trim(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
