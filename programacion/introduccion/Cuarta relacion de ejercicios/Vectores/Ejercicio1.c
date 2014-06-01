#include <stdio.h>
#define DIM_VECTOR 100

void leer_vector (int elementos, int vector [])
{
	int i;

	printf("\nIntroduce el primer elemento: ");
	scanf("%i", &vector [0]);
	for (i=1;i<elementos-1; i++)
	{
		printf("\nIntroduce el siguiente elemento: ");
		scanf("%i", &vector [i]);
	}
	printf("\nIntroduce el último elemento: ");
	scanf("%i", &vector [elementos-1]);
}

void invertir_vector (int elementos, int vector [], int inverso [])
{
	int i;
	
	for (i=elementos-1; i>=0; i--)
	{
		inverso [i] = vector [elementos-1-i];
	}
}

void imprimir_vector (int elementos, int inverso [])
{
	int i;
	printf("\nEl inverso del vector introducido es:\n\n");
	for (i=0; i<elementos; i++)
	{
		printf("%5i", inverso [i]);
	}
}

int main ()
{
	int elementos, vector [], inverso [];

	printf("\n¿Cuántos elementos desea introducir en su vector?\n");
	scanf("%i", &elementos);
	while ((elementos<1) || (elementos>DIM_VECTOR))
	{
		printf("\nEl número de elementos del vector introducido no es válido. Deberá ser un número entre 1 y 100, introduzca de nuevo el número de elementos: ");
		scanf("%i", &elementos);
	}
	leer_vector (elementos, vector);
	invertir_vector (elementos, vector, inverso);
	imprimir_vector (elementos, inverso);
	printf("\n\n");
	return (0);
}
