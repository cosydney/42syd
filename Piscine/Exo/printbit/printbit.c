
unsigned 	char printbit(unsigned char octet)
{
	int i;

	i = 0;

	while(i++ < 8)
	{
		if (octet & 0x80)
			printf("1");
		else
			printf("0");
		(octet <<= 1);
	}
}


int main (void)
{

	printbit(165);
}
