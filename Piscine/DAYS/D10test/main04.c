
#include <unistd.h>
int	ft_count_if(char **tab, int(*f)(char*));

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int ft_donothing(char *nb)
{
	return(1);
}
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main(void)
{
	char **arr;
	int count;
	
	count = 0;
	count = ft_count_if(arr, &ft_donothing);

	printf("%i\n", count);

}
