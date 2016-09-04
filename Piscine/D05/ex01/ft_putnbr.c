
void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unassigned int n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
		n = nb
	if (n > '9')
		ft_putnbr(n % 10 + '0')	
	ft_putchar(n);
}
