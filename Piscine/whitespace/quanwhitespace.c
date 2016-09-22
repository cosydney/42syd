#include <stdio.h>
#include <stdlib.h>

int		ft_wordlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	return (i);
}

char	*ft_skip_space(char *str)
{
	while (str[0] == ' ' || str[0] == '\t' || str[0] == '\n')
		str++;
	return (str);
}

void	ft_strdup(char *src, char **dest)
{
	int		i;

	i = 0;
	if	((*dest = (char *)malloc(sizeof(char) * (ft_wordlen(src) + 1))))
	{
		while (src[i] != ' ' && src[i] != '\t' && src[i] != '\n')
		{
			(*dest)[i] = src[i];
			i++;
		}
		(*dest)[i] = '\0';
	}
}

char	*ft_next_word(char *str)
{
	int i;

	i = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
		str++;
	if (str[i] == '\0')
		return (0);
	return (str);
}

char	**ft_split_whitespaces(char *str)
{
	char	*temp;
	char	**arr;
	int		count;
	int		index;

	count = 0;
	index = 0;
	temp = str;
	while (temp != 0)
	{
		temp = ft_skip_space(temp);
		count++;
		temp = ft_next_word(temp);
	}
	temp = str;
	if ((arr = (char**)malloc(sizeof(**arr) * (count + 1))))
	{
		while (temp != 0)
		{
			temp = ft_skip_space(temp);
			ft_strdup(temp, &arr[index]);
			temp = ft_next_word(temp);
			index++;
		}
		arr[index] = 0x0;
	}
	else
		return (0);
	int i;

	i = 0;
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
	return (arr);
}

int		main(void)
{
	char str[] = "It is a good day to die           ";

	ft_split_whitespaces(str);
	return (0);
}
