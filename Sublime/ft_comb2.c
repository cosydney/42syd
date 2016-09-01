void ft_putchar(char c);

void ft_print_single_combination(char a, char b, char x, char y)
{
if (a == '9' && b == '8' && x == '9' && y == '9')
{
ft_putchar(a);
ft_putchar(b);
ft_putchar(' ');
ft_putchar(x);
ft_putchar(y);
}
else
{
if (10 * a + b < 10 * x + y)
{
ft_putchar(a);
ft_putchar(b);
ft_putchar(' ');
ft_putchar(x);
ft_putchar(y);
ft_putchar(',');
ft_putchar(' ');
}
}
}

void ft_print_comb2(void)
{
char a;
char b;
char x;
char y;

a = '0';
while (a <= '9')
{
b = '0';
while (b <= '9')
{
x = '0';
while (x <= '9')
{
y = '0' - 1;
while (++y <= '9')
ft_print_single_combination(a, b, x, y);
x++;
}
b++;
}
a++;
}
}
