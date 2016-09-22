/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reversebits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 14:52:44 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/15 15:11:15 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char new_octet;

	new_octet = 0;	
	if (octet & 0x80)
		new_octet += 0x1;
	if (octet & 0x40)
		new_octet += 0x2;
	if (octet & 0x20)
		new_octet += 0x4;
	if (octet & 0x10)
		new_octet += 0x8;
	if (octet & 0x8)
		new_octet += 0x10;
	if (octet & 0x4)
		new_octet += 0x20;
	if (octet & 0x2)
		new_octet += 0x40;
	if (octet & 0x1)
		new_octet += 0x80;
	return (new_octet);
}

int main(void)
{
	char octet; 

	octet = 3;
	
	printf("%i\n", octet);
	printf("%i\n", reverse_bits(octet));


}
