void ft_putchar(char c);

char *ft_strrev(char *str)
{
int i;
int j;
char temp;

i = 0;
j = 0;
while (str[i] != '\0')
i++;
i--;
while (i >= j)
{
temp = str[i];
str[i] = str[j];
str[j] = temp;
j++;
i--;
}
return (str);
}