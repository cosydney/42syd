#include <stdio.h>
#include <stdlib.h>

void	ft_fprime(int a)
{
	int i;

	i = 2;
	while (i <= a)
	{
		if (a % i == 0)
		{
			printf("%i", i);
			a /= i;
			if (a != 1)
			{	
				printf("*");
				i = 1;
			}
		}
		i++;
	}
}

int main (int ac, char **ar)
{
	if (ac == 2)
		ft_fprime(atoi(ar[1]));	
	printf("\n");
	return (0);
}

