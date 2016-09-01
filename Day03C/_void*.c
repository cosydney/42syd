void ft_putchar(char ptr);
void ft_putnbr(int ptr);
void ft_putaddr(void *ptr);


int main(void)
{
	int a; 
	int *ptr;
	int **ptr2;
	void *superptr;

	a = 42;
	fct = &a;
	ptr = &a;
	ptr2 = &ptr; 
	superptr= &ptr2;

	return(0);

}