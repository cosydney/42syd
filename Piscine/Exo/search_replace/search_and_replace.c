/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 19:07:36 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/14 19:27:57 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void search_replace(char *str, char *a, char *b)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] == a[0])
			ft_putchar(b[0]);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac != 4)
		ft_putchar('\n');
	else
		search_replace(av[1], av[2], av[3]);
	return (0);
}
