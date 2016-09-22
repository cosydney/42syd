
#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int ft_donothing(int nb)
{
	return(1);
}

int		ft_putnbr(int nb)
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
	return (0);
}

int main(void)
{
	int  tab[1337];
	int *array;
	int n = 1337;
	n = 0;
	while (n < 1336)
	{
		tab[n] = n;
		n ++;
	}
	array = ft_map(tab, 1337, &ft_donothing);

	n = 0;
	while (array[n])
	{
		ft_putnbr(array[n]);
		ft_putchar(' ');
		n++;
	}

	write(1, "coucou\n", 8);
}
