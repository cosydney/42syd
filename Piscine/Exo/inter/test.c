nclude <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c ,1);
}

#include <stdio.h>

int        main(int argc, char **av)
{
	int        i;
	char    doublons[130];
	int        j;
	int        a;
	int        x;
	int        doublon;

	j = 0;
	while (doublons[j])
	{
		doublons[j] = '\0';
		j++;
	}
	x = 0;
	a = 1;
	if (argc == 3)
	{
		while (a < 3)
		{    i = 0;

			while (av[a][i])
			{
				j = 0;
				doublon = 0;
				while (doublons[j])
				{
					if (doublons[j] == av[a][i])
						doublon = 1;
					j++;
				}
				if (!doublon)
				{
					doublons[x] = av[a][i];
					ft_putchar(av[a][i]);
					x++;
				}
				i++;

			}
			a++;

		}
	}
	ft_putchar('\n');
	return (0);
}
