/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 14:40:10 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/15 14:49:09 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i; 
	char *dest;

	i = 0;
	while (src[i])
		i++;
	dest = (char *)malloc(sizeof(char) * i + 1);
	i = 0;
	while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
	return (dest);
}


#include <stdio.h>
int main(int ac, char **av)
{
	printf("%s \n\n",ft_strdup(av[1]));

	return (0);

}
