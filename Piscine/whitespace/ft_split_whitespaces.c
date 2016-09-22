/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2ft_split_whitespaces.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 16:14:54 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/09 14:10:34 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_count_words(char *str)
{
	int i;
	int words;

	i = 0;
	words = 1;
	while (str[i])
	{

		if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') &&
				(str[i + 1] != ' ' || str[i + 1] != '\n' || str[i + 1] != '\t'))
			words++;
		printf("%i", words);
		i++;
	}
	return (words);
}

int		ft_count_characters(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_count_words_length(char *str, int i, int j)
{
	j = i;
	while (str[j] != ' ' && str[j] != '\n' && str[j] != '\t' && str[j])
		j++;
	return (j);
}

int		ft_next_word_index(char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		k;
	int		l;
	int		i;
	int		j;

	k = 0;
	j = 0;
	l = 0;
	i = -1;
	tab = (char **)malloc(sizeof(char *) * (ft_count_words(str) + 1));
	while (i++ < ft_count_characters(str) - 1)
	{
		i = ft_next_word_index(str, i);
		j = ft_count_words_length(str, i, j);
		if (j > i)
			tab[k] = (char *)malloc(sizeof(char) * (j - i + 1));
		while (j > i && str[i])
			tab[k][l++] = str[i++];
		tab[k++][l] = '\0';
		l = 0;
	}
	tab[k] = 0x0;
	return (tab);
}


int main(void)
{
	char **tab = ft_split_whitespaces("Coucou ca va     ");
	printf("%s", tab[0]);
	printf("%s", tab[1]);
	printf("%s", tab[2]);
}
