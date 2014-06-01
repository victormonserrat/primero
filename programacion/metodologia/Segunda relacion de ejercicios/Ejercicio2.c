#include <stdio.h>
#include <stdlib.h>

int* reserva_vector (int nEle)
{
	int *vector;
	if((vector=(int*)malloc(nEle*sizeof(int)))==NULL)
	{
		printf("\nError en la asignación de memoria.");
		exit(-1);
	}
	else
	{
		return(vector);
	}
}

void leer_vector (int nEle, int vector [])
{
	int i;

	for (i=0; i<nEle; i++)
	{
		printf("\nIntroduzca el elemento [%i]: ", i);
		scanf("%i", &(vector [i]));
	}
}

int* devuelve_impares (int nEle, int *vector, int *contador)
{
	int i, j=0;
	int *salida;

	for (i=0; i<nEle; i++)
	{
		if (vector [i] % 2 != 0)
		{
			*(contador)=(*(contador)) + 1;
		}
	}
	salida = reserva_vector (*(contador));
	*(contador) = 0;
	for (i=0; i<nEle; i++)
	{
		if (vector [i] % 2 != 0)
		{
			salida [j] = vector [i];
			*(contador)=(*(contador)) + 1;
			j++;
		}
	}
	return (salida);
}

void imprime_vector (int nEle, int vector [])
{
	int i;

	printf("\n");
	for (i=0; i<nEle; i++)
	{
		printf("%5i", vector [i]);
	}
	printf("\n\n");
}

int main ()
{
	int nEle, *vector, *impares;
	int contador=0;

	printf("\nIntroduzca el número de elementos del vector: ");
	scanf("%i", &nEle);
	vector = reserva_vector (nEle);
	leer_vector (nEle, vector);
	impares = devuelve_impares (nEle, vector, &contador);
	imprime_vector (contador, impares);
	return (0);
}
