/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pouet.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 21:01:08 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/19 21:01:10 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

char			*ft_evaluate_first_line(char *str, int *fd)
{
	char		buf[1];
	char		*ret;
	int			length;
	int			first_line;

	length = 0;
	first_line = 1;
	*fd = open(str, O_RDWR);
	if ((ret = (char *)malloc(1)))
	{
		while ((read(*fd, buf, 1) != 0 && first_line == 1))
		{
			if (buf[0] == '\n')
				first_line = 0;
			ret = ft_remalloc(ret, length + 1);
			ret[length] = buf[0];
			length++;
		}
		ret[length] = '\0';
	}
	if (close(*fd) == -1)
		ft_putstr("close error ()");
	return (ret);
}

void			ft_help(t_line *line, t_coord *coord, t_list *sq_props)
{
	ft_remplissage(line, coord, sq_props);
	ft_solve_grid(line, sq_props, coord);
	line = (line)->next;
	while ((line))
	{
		write(1, (line->str), 4 * ((*sq_props).width + 1));
		line = (line)->next;
	}
}

int				ft_open(t_list *sq_props, int fd, int *j)
{
	t_ok		*ok;

	ok = (t_ok *)malloc(sizeof(ok) + 40);
	ok->i = -1;
	*j = 0;
	ok->k = 0;
	ok->hauteur = 0;
	while (++(ok->i) <= (*sq_props).fline_index)
	{
		read(fd, ok->buf, 1);
		(ok->buf)[1] = '\0';
	}
	while ((read(fd, ok->buf, 1)))
	{
		if (ok->k < 3 && (ok->buf)[0] != '\n')
			(*j)++;
		if ((ok->buf)[0] == '\n')
			ok->k = 5;
		if (ft_check((ok->buf)[0], sq_props, *j, &(ok->hauteur)) == 1)
		{
			ft_error();
			return (-1);
		}
	}
	return (ok->hauteur);
}

int				ft_er(t_tepu *bitch, t_list *sq_props)
{
	if (bitch->hauteur != sq_props->height)
	{
		ft_error();
		return (1);
	}
	return (0);
}

void			ft_ok(int ac, t_tepu *bitch)
{
	if (ac == 1)
	{
		ft_create_file();
		bitch->file_name = "stdin_file";
	}
}
