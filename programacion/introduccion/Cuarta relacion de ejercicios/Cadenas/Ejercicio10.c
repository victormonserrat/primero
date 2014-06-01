#include <stdio.h>
#include <string.h>
#define DIM_CHAR 100

int main ()
{

	char nombre1 [DIM_CHAR], nombre2 [DIM_CHAR];
	int comparador;

	printf("\nIntroduzca un nombre: ");
	fgets(nombre1, DIM_CHAR, stdin);
	printf("\nIntroduzca otro nombre: ");
	fgets(nombre2, DIM_CHAR, stdin);
	comparador = strcmp (nombre1, nombre2);
	if (comparador == 0)
	{
		printf("\nLos dos nombres son iguales.\n\n");
	}
	if (comparador < 0)
	{
		printf("\nEl primer nombre precede alfabéticamente al segundo.\n\n");
	}
	if (comparador > 0)
	{
		printf("\nEl segundo nombre precede alfabéticamente al primero.\n\n");
	}
}
