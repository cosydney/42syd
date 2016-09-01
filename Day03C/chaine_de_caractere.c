//chaine_de_caractere.c

void ft_putchar(char ptr);
void ft_putnbr(int ptr);
void ft_putaddr(void *ptr);

int main(void)
{
	char ptr[] = "toto"; // cannot say

	ptr = "toto";
	c = '*';

	ptr[0] = 'p' // Je peux faire cela car jai declarer ptr[] = "toto" sinon jaurais fais sauter la memoire
	ft_putchar(*ptr); // = a ft_putchar([0])
	ft_putchar('\n');
	return(0);

}