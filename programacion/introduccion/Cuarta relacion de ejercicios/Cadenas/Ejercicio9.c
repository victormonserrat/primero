#include <stdio.h>
#include <string.h>
#define DIM_CHAR 100

int main ()
{

	char nombre [DIM_CHAR], apellidos [DIM_CHAR];

	printf("\nIntroduzca su nombre: ");
	fgets(nombre, DIM_CHAR, stdin);
	printf("\nIntroduzca sus apellidos: ");
	fgets(apellidos, DIM_CHAR, stdin);
	nombre [strlen (nombre)-1] = ' ';
	strcat (nombre, apellidos);
	printf ("\nSu nombre completo es: %s\n", nombre);
}
