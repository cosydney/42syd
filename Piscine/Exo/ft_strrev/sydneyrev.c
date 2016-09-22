/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sydneyrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 13:45:17 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/16 14:00:57 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i; 

	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}

char	*ft_strrev(char *str)
{
	int i; 
	int l;
	char tmp;

	if (str)
	{
		l = ft_strlen(str);
		i = 0;
		while(i < l/2)
		{
			tmp = str[i];
			str[i] = str[l - i - 1];
			str[l - i - 1] = tmp;
			i++;
		}
	}
	return (str);
}


char		*ft_strrev2(char *str)
{
	int			i;
	int			length;
	char		tmp;

	if (str)
	{
		i = 0;
		length = 6;
		while (i < length / 2)
		{
			tmp = str[i];
			str[i] = str[length - i - 1];
			str[length - i - 1] = tmp;
			i++;
		}
	}
	return (str);
}


int main(void)
{
	char str[14] = "coucou";

	printf("%s \n", ft_strrev(str));

	return (0);
}
