#include <stdio.h>
#include <stdlib.h>

int	ft_pgcd(int a, int b)
{
	int i;
	int pgcd;

	i = 1;
	pgcd = 1;
	while (i <= a || i <= b)
	{
		if (a % i == 0 && b % i == 0)
			pgcd = i;
		i++;
	}
	return (pgcd);
}

int main (int ac, char **ar)
{
	if (ac == 3)
	{
		printf("%i", ft_pgcd(atoi(ar[1]), atoi(ar[2])));	
	}
	printf("\n");
	return (0);
}

