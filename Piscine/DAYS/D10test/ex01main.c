/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 11:11:49 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/12 11:11:53 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

nclude <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void		ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int main(void)
{
	int  tab[1337];
	int n = 1337;
	n = 0;
	while (n < 1336)
	{
		tab[n] = n;
		n ++;
	}
	ft_foreach(tab, 1337, &ft_putnbr);
}
