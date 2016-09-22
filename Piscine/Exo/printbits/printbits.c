/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printbits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 15:13:43 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/15 15:24:50 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int i; 

	i = 0;
	while (i++ < 8)
	{
		if (octet & 0x80)
			ft_putchar('1');
		else
			ft_putchar('0');
		octet <<= 1;
	}
}


int main(void)
{
	print_bits(167);
}
