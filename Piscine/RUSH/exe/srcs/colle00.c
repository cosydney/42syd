/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 15:09:44 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/18 12:01:15 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"
#include <stdlib.h>

int    ft_str_first_line(int width, char *str, int index)
{
	int    i;

	i = 1;
	str[index] = '0';
	index++;
	while (i <= width - 2)
	{
		str[index] = '0';
		i++;
		index++;
	}
	if (width > 1)
	{
		str[index] = '0';
		index++;
		i++;
	}
	str[index] = '\n';
	return (index + 1);
}

int    ft_str_middle_line(int width, char *str, int index)
{
	int    i;

	i = 1;
	str[index] = '0';
	index++;
	while (i <= width - 2)
	{
		str[index] = ' ';
		i++;
		index++;
	}
	if (width > 1)
	{
		str[index] = '0';
		index++;
		i++;
	}
	str[index] = '\n';
	return (index + 1);
}

int    ft_str_last_line(int width, char *str, int index)
{
	int    i;

	i = 1;
	str[index] = '0';
	index++;
	while (i <= width - 2)
	{
		str[index] = '0';
		i++;
		index++;
	}
	if (width > 1)
	{
		str[index] = '0';
		index++;
		i++;
	}
	str[index] = '\n';
	return (index + 1);
}

char    *colle00(int x, int y)
{
	int    height;
	char    *str;
	int    index;

	index = 0;
	str = (char *)malloc(sizeof(char) * (x + 1) * y + 1);
	height = 1;
	if (x > 0)
	{
		if (y > 0)
			index = ft_str_first_line(x, str, 0);
		while (height < y - 1)
		{
			index = ft_str_middle_line(x, str, index);
			height++;
		}
		if (y > 1)
			index = ft_str_last_line(x, str, index);
	}
	str[index] = '\0';
	return (str);
}
