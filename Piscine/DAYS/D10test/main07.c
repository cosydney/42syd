
#include <stdio.h>
int main(int argc,char **argv)
{
	int i;

	i = 0;
	int j = 10;

	ft_sort_wordtab(argv);
	i = 0;
	while (i < argc)
	{
		printf("%s \n", argv[i]);
		i++;
	}
}
