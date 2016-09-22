/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 14:30:04 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/15 14:39:43 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i; 

	i = 0;
	while (s1[i] ==  s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
int main(int ac, char **argv)
{
	ac = 0;
	printf("%i\n", ft_strcmp(argv[1], argv[2]));

	return (0);
}
