void ft_putchar(char ptr);
void ft_putnbr(int ptr);
void ft_put_addr(void *ptr);

int main(void)
{
	int tab[10];
	// pour acceder au dernier element tu tableau cest donc tab[ dernier element - 1] cad tab[9]
	tab[0]=42;
	// equivalent a *(tab + 0) = 42;

	int tab2[10];
	int *tabptr[2];


	tabptr[0] = tab;
	tabptr[1] = tab2;
	tabptr[1][3]= 42;
	// les deux | expressions sont equivalentes
	*(*(tabptr + 1) + 3)= 42;



	ft_putaddr(tab);
	ft_putchar(' ');
	ft_putnbr(tab[0];
	ft_putchar('\n');
	return (0);

}
