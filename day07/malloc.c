#include <stdlib.h>
#define LEN		42

int main()
{
	int i;
	int *str;

	str = (char *)malloc(sizeof(*str) * (LEN + 1));
	i = 0;
	while ( i < LEN)
	{
		str[i] = '0' + (i % 10);
		i++;
	}
	str[i] = '\0';
	ft_putstr(str);
	return (0);
}