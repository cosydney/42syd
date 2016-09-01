#include <unistd.h>

void ft_putchar(char c)
{
			write(1, &c, 1);
}

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = nb * -1;
	}
	else
	{
		n = nb;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
}

int main()
{

ft_putnbr(42);
ft_putchar('\n');
ft_putnbr(-42);
ft_putchar('\n');
ft_putnbr(2113);
ft_putchar('\n');
ft_putnbr(-135135225);
ft_putchar('\n');
ft_putnbr(-214748364814);
ft_putchar('\n');
ft_putnbr(0);
ft_putchar('\n');


return(0);
}