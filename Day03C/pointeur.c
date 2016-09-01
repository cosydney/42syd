void	ft_putchar(char ptr);
void ft_putnbr(int ptr);
void put_addr(void *ptr);

int main(void)
{
	int a; 
	int *ptr;
	int **ptr2;

	a = 3;
	ptr =&a;

	ft_putnbr(*ptr);
	a = 42;
	ft_putchar('\n');
	ft_putnbr(*ptr)
	// *ptr = a  // en gros :)

	ptr2 = &ptr; 

	ft_putnbr(**ptr2);
	**ptr2 = 42;


	return = 0;
}