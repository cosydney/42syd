/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 17:14:45 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/22 17:29:37 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char new_octet;


	if (octet & 0x80)
		new_octet += 0x01;
	if (octet & 0x01)
		new_octet += 0x80;
	if (octet & 0x40)
		new_octet += 0x02;
	if (octet & 0x02)
		new_octet += 0x40;
	if (octet & 0x20)
		new_octet += 0x04;
	if (octet & 0x04)
		new_octet += 0x20;
	return(new_octet);
}


int main(void)
{
	printf("%i", reverse_bits(131));
		return (0);
}
