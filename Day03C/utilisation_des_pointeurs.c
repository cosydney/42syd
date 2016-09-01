void ft_putchar(char ptr);
void ft_putnbr(int ptr);
void ft_putaddr(void *ptr);


void fct(int *a);
{
	*a = 12;
}


int main(void)
{
	int a; 

	a = 42;
	fct(&a);

	ft_putnbr(a);
	ft_putchar('\n');

	return(0);

}