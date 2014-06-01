/*14. Implementa un programa que determine si un número dado por el usuario es o no un número primo.*/

#include <stdio.h>

main ()
{

int numero, contador = 0, sumando = 1;

	printf ("\n\nIntroduzca un número para calcular si es o no primo: \n");
	scanf ("%d", &numero);

	if (numero == 1)
		{printf ("El número es primo\n\n");
		return 0;}

	if (numero >= 1)
		{
			while (numero + 1 != sumando)
				{
					if (numero % sumando == 0)
						(contador ++ & sumando ++);
					else
						(sumando ++);
				}
		}

if (contador == 2)
	printf ("El número es primo\n\n");
else
	printf ("El número no es primo\n\n");
}
			
