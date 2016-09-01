void ft_putchar(char ptr);
void ft_putnbr(int ptr);
void ft_put_addr(void *ptr);

int main(void)
{
	int a; 
	int b; 
	int c;

	a = 23;
	b = 42;
	ptr = &b;
	ft_putaddr(ptr + 1);
	ft_putchar(' ');
	ft_putnbr(*(ptr + 1));
	ft_putchar('\n');
	return (0);

}


int main(void)
{
	char a; 
	char b; 
	char c;

	a = '23';
	b = 'o';
	ptr = &b;
	ft_putaddr(ptr + 1);
	ft_putchar(' ');
	ft_putnbr(*(ptr + 1));
	ft_putchar('\n');
	return (0);

}



// le compilateur connait la taille de mes types de donner