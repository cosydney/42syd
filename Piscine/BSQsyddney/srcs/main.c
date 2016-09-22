/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 21:00:53 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/21 18:46:11 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void				ft_putstr(char *str)
{
	int				i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

t_list				*ft_define_sq_prop(char *str)
{
	t_list			*sq_props;
	int				length;
	int				start;
	long long int	res;

	res = 0;
	start = 0;
	length = ft_strlen(str) - 1;
	(*sq_props).width = 0;
	sq_props = (t_list *)malloc(sizeof(t_list) + 100);
	(*sq_props).fline_index = length;
	(*sq_props).plain_char = str[length - 1];
	(*sq_props).obstacle = str[length - 2];
	(*sq_props).valid_char = str[length - 3];
	while (start < length - 3)
	{
		res = res * 10 + str[start] - '0';
		start++;
	}
	(*sq_props).height = res;
	return (sq_props);
}

char				*ft_remalloc(char *str, int size)
{
	char			*dst;
	int				i;

	i = 0;
	if (!(dst = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (str[i])
	{
		dst[i] = str[i];
		i++;
	}
	dst[i + 1] = '\0';
	free(str);
	return (dst);
}

void				ft_init(t_tepu *bitch)
{
	bitch->j = 0;
	bitch->hauteur = 0;
}

int					main(int ac, char **av)
{
	t_line			*line;
	t_list			*sq_props;
	t_coord			*coord;
	t_tepu			*bitch;

	bitch = (t_tepu *)malloc(sizeof(t_tepu));
	coord = (t_coord *)malloc(sizeof(t_coord));
	ft_init(bitch);
	ft_ok(ac, bitch);
	if (ac == 2)
		bitch->file_name = av[1];
	bitch->str = ft_evaluate_first_line(bitch->file_name, &(bitch->fd));
	sq_props = ft_define_sq_prop(bitch->str);
	if (open(bitch->file_name, O_RDWR) < 0)
		return (1);
	bitch->hauteur = ft_open(sq_props, bitch->fd, &(bitch->j));
	if (bitch->hauteur == -1)
		return (1);
	sq_props->width = bitch->j;
	if (ft_er(bitch, sq_props) == 1)
		return (1);
	line = ft_create_table(bitch->file_name, sq_props);
	ft_help(line, coord, sq_props);
	return (0);
}
