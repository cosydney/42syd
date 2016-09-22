#include <stdlib.h>

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
	i = 0;
	tab = (char **)malloc(sizeof(char *) * ft_count_words(str));
	while (i < ft_count_characters(str) - 1)
	{
		j = i;
		while (str[j] != ' ' && str[j] != '\n' && str[j] != '\t' && str[j])
			j++;
		if (j > i)
			tab[k] = (char *)malloc(sizeof(char) * (j - i + 1));
		while (j > i && str[i])
			tab[k][l++] = str[i++];
		tab[k++][l] = '\0';
		l = 0;
		i++;
	}
	return (tab);
}


#include <stdio.h>

int main(void)
{
	char **tab = ft_split_whitespaces("Coucou ca va piao s");
	printf("%s", tab[0]);
	printf("%s", tab[1]);
	printf("%s", tab[2]);

}
