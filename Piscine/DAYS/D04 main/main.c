// find . | norminette -R CheckForbiddenSourceHeader

#include "./ex00/ft_iterative_factorial.c"
#include "./ex01/ft_recursive_factorial.c"
#include "./ex02/ft_iterative_power.c"
#include "./ex03/ft_recursive_power.c"
#include "./ex04/ft_fibonacci.c"
#include "./ex05/ft_sqrt.c"
#include "./ex06/ft_is_prime.c"
#include "./ex07/ft_find_next_prime.c"
#include <stdio.h>
#include <unistd.h>


int main()
{
	printf("##################------------Ex00: iteractive factorial----------####################\n");
	int resultat; 
	resultat = ft_iterative_factorial(5);
	printf("resultat de factorisation 5->:%i      (resultat escompte 120)\n", resultat);
	resultat = ft_iterative_factorial(12);
	printf("resultat de factorisation 12->:%i (resultat escompte 479001600)\n", resultat);
	resultat = ft_iterative_factorial(13);
	printf("resultat de factorisation 13->:%i      (resultat escompte 0)\n\n\n", resultat);
	
	printf("##################------------Ex01: recursive factorial----------####################\n");
	resultat = ft_recursive_factorial(5);
	printf("resultat de factorisation 5->:%i      (resultat escompte: 120)\n", resultat);
	resultat = ft_recursive_factorial(12);
	printf("resultat de factorisation 12->:%i (resultat escompte: 479001600)\n", resultat);
	resultat = ft_recursive_factorial(13);
	printf("resultat de factorisation 13->:%i      (resultat escompte: 0)\n\n\n", resultat);


	printf("##################------------Ex02: iterative power----------####################\n");
	resultat = ft_iterative_power(4, 5);
	printf("resultat de la puissance 5 sur 4->:%i (resultat escompte: 1024)\n", resultat);
	resultat = ft_iterative_power(4, 0);
	printf("resultat de la puissance 0 sur 4->:%i (resultat escompte: 1)\n", resultat);
	resultat = ft_iterative_power(4, -5);
	printf("resultat de la puissance -5 sur 4->:%i (resultat escompte: 0)\n\n\n", resultat);

	printf("##################------------Ex03: recursive power----------####################\n");
	resultat = ft_recursive_power(4, 5);
	printf("resultat de la puissance 5 sur 4->:%i (resultat escompte: 1024)\n", resultat);
	resultat = ft_recursive_power(4, 0);
	printf("resultat de la puissance 0 sur 4->:%i (resultat escompte: 1)\n", resultat);
	resultat = ft_recursive_power(4, -5);
	printf("resultat de la puissance -5 sur 4->:%i (resultat escompte: 0)\n\n\n", resultat);

	printf("##################------------Ex04: Fibonnaci Numbers----------####################\n");

	resultat = ft_fibonacci(-14);
	printf("Fibonnaci index -14: ->%d  (Resultat escompte: -1)\n", resultat);
	resultat = ft_fibonacci(2);
	printf("Fibonnaci index 2: ->%d  (Resultat escompte: 1)\n", resultat);
	resultat = ft_fibonacci(3);
	printf("Fibonnaci index 3: ->%d  (Resultat escompte: 2)\n", resultat);
	resultat = ft_fibonacci(10);
	printf("Fibonnaci index 10: ->%d  (Resultat escompte: 55)\n\n\n", resultat);

	printf("##################------------Ex05: racine carre----------####################\n");
	resultat = ft_sqrt(9);
	printf("Racine carree de 9 : -> %d (resultat escompte: 3)\n", resultat);
	resultat = ft_sqrt(126);
	printf("Racine carree de 126 : -> %d (resultat escompte: 16)\n", resultat);
	resultat = ft_sqrt(0);
	printf("Racine carree de 0 : -> %d (resultat escompte: 0)\n", resultat);
	resultat = ft_sqrt(10);
	printf("Racine carree de 10 : -> %d (resultat escompte: 0)\n\n\n", resultat);

	printf("##################------------Ex06 Prime numbers----------####################\n");
	resultat = ft_is_prime(97);
	printf("Nombre premier 97? : ->%d (resultat escompte: 1)\n", resultat);	
	resultat = ft_is_prime(0);
	printf("Nombre premier 0? : ->%d (resultat escompte: 0)\n", resultat);
	resultat = ft_is_prime(1);
	printf("Nombre premier 1? : ->%d (resultat escompte: 0)\n", resultat);
	resultat = ft_is_prime(23);
	printf("Nombre premier 23? : ->%d (resultat escompte: 1)\n", resultat);
	resultat = ft_is_prime(12);
	printf("Nombre premier 12? : ->%d (resultat escompte: 0)\n", resultat);
	resultat = ft_is_prime(1061);
	printf("Nombre premier 1061? : ->%d (resultat escompte: 1)\n\n\n", resultat);

	printf("##################------------Ex07: find next prime----------####################\n");
	
	printf("Nombre premier 90? : -> %d (resultat escompte: 97)\n", ft_find_next_prime(90));
	printf("Nombre premier 97? : -> %d (resultat escompte: 97)\n", ft_find_next_prime(97));
	printf("Nombre premier 0? : -> %d (resultat escompte: 2)\n", ft_find_next_prime(0));
	printf("Nombre premier -90? : -> %d (resultat escompte: 2)\n", ft_find_next_prime(-90));
	printf("Nombre premier -3559? : -> %d (resultat escompte: 2)\n", ft_find_next_prime(-3559));


	printf("##################------------Ex08----------####################\n");
	return(0);
}



