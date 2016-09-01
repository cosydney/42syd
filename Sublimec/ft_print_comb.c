/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 17:47:11 by sycohen           #+#    #+#             */
/*   Updated: 2016/08/31 20:38:25 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c);
void	fr_print_char(char a, char b, char c);
void	ft_print_comb(void);

void    ft_putchar(char c)
{
                write(1, &c, 1);
}


void	ft_print_char(char a, char b, char c)
{
	if (a == '7' && b == '8' && c == '9' )
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
	}
	else
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				if (a != b && a != c && b != c && b < c && a < b)
					ft_print_char(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

int main()
{
    ft_print_comb();
    return(0);
}