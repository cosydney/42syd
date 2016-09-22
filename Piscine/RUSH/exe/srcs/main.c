/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeldame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 13:44:47 by bbeldame          #+#    #+#             */
/*   Updated: 2016/09/17 18:38:51 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "ft_colle.h"

int		ft_atoi(char *str);
char	*colle(int x, int y);

int colle_length(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int ac, char **argv)
{
	char *str;
	int x;
	int y;
	//int length;


	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);	
	//FILE *fp;
	str = colle00(x, y);
	ft_putstr(str);
	//fp = fopen("tableau", "w");
	//fwrite(str, 1 , colle_length(str), fp);

	//fclose(fp);

	return (0);
}
