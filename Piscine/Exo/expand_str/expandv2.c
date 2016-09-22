/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expandv2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 14:15:36 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/21 21:20:53 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*trim(char *str)
{
	int i;

	i = 0;
	while(str[0] == ' ' || str[0] == '\t')
	{
		i = 0;
		while(str[i++])
			str[i - 1] = str[i];
	}
	return (str);
}

int		next_word(char *str, int i)
{
	while(str[i])
	{
		if(str[i] != ' ' || str[i] != '\n' || str[i] != '\0')
			return (1);
		i++;
	}
	return (0);
}

void	ft_expand_str(char *str)
{
	int i;
	int space;

	i = 0;
	space = 0;
	while(str[i])
	{
		if(str[i] == ' ' || str[i] =='\t')
			space = 1;
		else
		{
			if(space)
				ft_putstr("   ");
			if (str[i] != ' ' || str[i] != '\t')
				ft_putchar(str[i]);
			space = 0;
		}
		i++;
	}
}

int main (int ac, char **av)
{
	if (ac != 2)
		;
	else
		ft_expand_str((av[1]));
	ft_putchar('\n');
	return (0);
}
