Les librairies

norminette -R CheckForbiddenSourceHeader

Librairies: 

gcc -c cree un fichier .o 

ar rc 

chercher dans le man

str = str - 32

ar rc libstr.a ft_putchar.o ft_putstr.co //va creer une librairie
// sinteresser a ar rc.. 

gcc main.c -L. -lstr // va chercher une librairie et je peut lui dire lequel..

ranlib libstr.a // index notre librairie


## Les parametres

Main peut prendre deux arguments

int main(int argc, char **argv);

arg[0] cest le nom du fichier 
arg[1] cest le premier argument

if (argc == 2)
	{
		ft_putstr(argv[1]);
	}
	else
	{
		ft_putstr("usage: ./a.out toto\n");
		return 0;
	}


premiere etape: creer le .o
gcc -c fichier.c 
deuxieme etape: ar rc libstr.a + tout les fichiers 

gcc -L. -lstr
// -L. dans ce repertoire
// -lstr va chercher la libstr.