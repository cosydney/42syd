/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 18:55:11 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/22 21:46:41 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdio.h>

int		ft_count_words(char *str)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t'))
			i++;	
		while(str[i] != ' ' || str[i] !=  '\t')
			i++;
		count++;
	}
	printf("count of words %i\n", count);
	return (count++);
}

int 	ft_count_characters(char *str, int i)
{
	while ((str[i] != ' ' || str[i] != '\t' || str[i] != '\n') && str[i])
	{	
		i++;
	}
	printf("count of characters %i\n", i);
	return (i);
}

int		find_next_words(char *str, int i)
{
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
		i++;

	printf("count until next word %i\n", i);
	return (i);
}

char	**ft_split(char *str)
{
	char **tab;
	int wordsize;
	int j;
	int wordi;
	int i;

	i = 0;
	j = 0;
	tab = (char **)malloc(sizeof(char *) * ft_count_words(str) + 1);
	while(str[i])
	{	
		wordi = 0;
		i = find_next_words(str, i);
		wordsize = ft_count_characters( str, i);
		tab[j] = malloc(sizeof(char) * wordsize + 1);
		while(wordi < wordsize)	
		{
			tab[j][wordi] = str[i];
			wordi++;
		}
		tab[j][wordi] = '\0';
		j++;
	}
	tab[j] = 0;
	if (wordsize == 0)
		return (0);
	else
		return (tab);
}

#include <stdio.h>
int main(void)
{
	char **tab = ft_split("Coucou ca va");
	printf("%s", tab[0]);
	printf("%s", tab[1]);
	printf("%s", tab[2]);

}

/*int main(int ac, char **av)
  {
  int i;
  char **tab ;

  i = 0;
  tab = ft_split(*av);
  while (tab[i])
  {
  printf("%s \n\n", tab[i]);
  i++;
  }

  }*/
