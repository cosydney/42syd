nt 	ft_sort(int n, int v)
{
	if (n < v)
		return (-1);
	if (n > v)
		return (1);
	if (n == v)
		return (0);
	return (0);
}


int main(void)
{
	int tab[9];
	int i;

	i = 0;
	int j = 10;
	while (i <= 9)
	{
		tab[i] = j;
		i++;
		j++;
	}
	tab[3] = 9;

	printf("tab 0  :%i\n", tab[0]);
	printf("tab 1: %i\n", tab[1]);
	printf("tab 2  :%i\n", tab[2]);
	printf("tab 3  :%i\n", tab[3]);
	printf("tab 4  :%i\n", tab[4]);
	printf("resultat de ft_sort%i\n", ft_sort(tab[i], tab[i + 1]));
	printf("resultat de ft_is_sort %i\n", ft_is_sort(tab, 9, &ft_sort));
	return (0);
	/*
	   printf("print j: %i \n", i);
	   printf("print i: %i \n", j);
	   printf("print length: %i\n", length);
	   */
}
