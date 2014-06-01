#include <stdio.h>
#define N 5

void Lectura (double valores [])
{
	int i;

	for (i=0; i<N; i++)
	{
		printf ("\nIntroduzca un valor del vector: ");
		scanf ("%lf", valores+i);
	}
}

void Escritura (double valores [])
{
	int i;

	printf ("\nLos valores del vector son: \n");
	for (i=0; i<N; i++)
	{
		printf ("\n%lf.\n", *(valores+i));
	}
}

double Media_aritmetica (double valores [])
{
	int i;
	double suma=0, media;

	for (i=0; i<N; i++)
	{
		suma = suma + *(valores+i);
	}
	media = suma/N;
	return (media);
}

int main ()
{
	double valores [N], media;

	Lectura (valores);
	Escritura (valores);
	media = Media_aritmetica (valores);
	printf ("\nLa media aritmética de los valores del vector es: %lf.\n\n", media);
	return (0);
}
