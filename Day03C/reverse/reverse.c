/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 17:01:20 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/01 17:56:39 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int a;
	int b;
	int t;

	b = 0;
	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	a--; // So it starts from the end of the string
	while (a >= b)
	{
		t = str[a];
		str[a] = str[b];
		str[b] = t;
		b++;
		a--;
	}
	printf("%s", str);
	return(str);
}

int main()
{
	char tablo[100] = "yqllq i want to test thousand of millions of things now hello this is me this is you";

	ft_strrev(tablo);
	return(0);
}
