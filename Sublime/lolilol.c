void    ft_putchar(char c);

void    ft_print_char(char a, char b, char c)
{
if (a + b + c == 168)
{
ft_putchar(a);
ft_putchar(b);
ft_putchar(c);
}
else
{
ft_putchar(a);
ft_putchar(b);
ft_putchar(c);
ft_putchar(44);
ft_putchar(32);
}
}

void    ft_print_comb(void)
{
char a;
char b;
char c;

a = '0';
while (a <= '9')
{
b = '0';
while (b <= '9')
{
c = '0';
while (c <= '9')
{
if (b != c && a != c && a != b && b < c && a < b)
ft_print_char(a, b, c);
c++;
}
b++;
}
a++;
}
}