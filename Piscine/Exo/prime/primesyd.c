

#include <stdio.h>

void fprime(int nb)
{
	int i; 

	i = 2;

	while (i <= nb)
	{
		if (nb % i == 0)
		{
			printf("%i", i);
			nb /= i;
			if (nb != 1)
				printf("*");	
		//	i = 1;
		}
		i++;
	}
}




int main(int ac, char **av)
{
	fprime(225225);
}
