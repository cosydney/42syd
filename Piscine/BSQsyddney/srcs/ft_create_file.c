/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 20:59:52 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/19 20:59:54 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void		ft_create_file(void)
{
	char	buf_line[4096];
	int		fd;
	int		size;

	if ((fd = open("stdin_file", O_TRUNC | O_RDWR | O_CREAT, S_IRWXU)) < 0)
		write(2, "map error\n", 10);
	while ((size = read(0, buf_line, 4096)) && fd > 0)
	{
		write(fd, buf_line, size);
	}
	if (fd > 0)
	{
		if (close(fd) == -1)
			ft_putstr("close error ()");
	}
}
