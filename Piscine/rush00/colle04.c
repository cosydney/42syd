void    ft_putchar(char c);

void    print_line(int width, char begin, char center, char end)
{
	int i;

	i = 0;
	if (width >= -1)
		ft_putchar(begin);
	while (i < width)
	{
		ft_putchar(center);
		i++;
	}
	if (width > -1)
		ft_putchar(end);
	ft_putchar('\n');
}

void    colle(int x, int y)
{
	int i;

	i = 2;
	if (x > 0)
	{
		if (y > 0)
			print_line(x - 2, 'A', 'B', 'C');
		while (i < y)
		{
			print_line(x - 2, 'B', ' ', 'B');
			i++;
		}
		if (y > 1)
			print_line(x - 2, 'C', 'B', 'A');
	}
}
