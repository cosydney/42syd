/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_table.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 21:00:05 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/19 21:00:06 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int			*ft_strcpy(int *dest, char *src, t_list *sq_props)
{
	int		i;

	i = 0;
	dest = (int *)malloc(sizeof(int) * ((sq_props->width + 1)));
	while (i <= sq_props->width)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

void		ft_skip_first_line(int fd)
{
	char	buf[2];

	buf[0] = '\0';
	read(fd, buf, 1);
}

t_line		*ft_create_table(char *str, t_list *sq_props)
{
	t_line	*line;
	int		i;
	int		fd;
	int		*dst;
	char	buf_line[4096];

	i = -1;
	if (((fd = open(str, O_RDWR)) == -1))
		ft_putstr("open error ()");
	while (++i <= (*sq_props).fline_index)
		ft_skip_first_line(fd);
	line = ft_create_elem(dst);
	while (read(fd, buf_line, (*sq_props).width + 1) != 0)
	{
		dst = ft_strcpy(dst, buf_line, sq_props);
		line = ft_line_push_back(line, dst);
	}
	if (close(fd) == -1)
		ft_putstr("close error ()");
	return (line);
}
