#include <stdio.h>
#define DIM_VECTOR 50

void leer_vector (float vector [])
{
	int i;

	for (i=0; i<DIM_VECTOR; i++)
	{
		printf("\nNota del alumno %i: ", i);
		scanf("%f", &vector [i]);
		while (vector [i] < 0) || (vector [i] > 10)
		{
			printf("\nError: La nota debe ser un número entre 0 y 10. Vuelva a introducir la nota del alumno %i: ", i);
			scanf("%f", &vector [i]);
		}
	}
}

void media (float vector [], float* media_pares, float* media_impares)
{
	int i;
	float suma_pares = 0, suma_impares = 0;

	for (i=0; i<DIM_VECTOR; i++)
	{
		suma_pares = suma_pares + vector [i];
		i++;
	}
	*media_pares = suma_pares/(DIM_VECTOR/2);

	for (i=1; i<DIM_VECTOR; i++)
	{
		suma_impares = suma_impares + vector [i];
		i++;
	}
	*media_impares = suma_impares/(DIM_VECTOR/2);
}

void maximo (float vector [], float* maximo_pares, float* maximo_impares)
{
	int i;
	
	*maximo_pares = vector [0];
	for (i=2; i<DIM_VECTOR; i++)
	{
		if ((vector [i]) > (*maximo_pares))
		{
			*maximo_pares = vector [i];
		}
		i++;
	}
	*maximo_impares = vector [1];
	for (i=3; i<DIM_VECTOR; i++)
	{
		if ((vector [i]) > (*maximo_impares))
		{
			*maximo_impares = vector [i];
		}
		i++;
	}
}

void minimo (float vector [], float* minimo_pares, float* minimo_impares)
{
	int i;
	
	*minimo_pares = vector [0];
	for (i=2; i<DIM_VECTOR; i++)
	{
		if ((vector [i]) < (*minimo_pares))
		{
			*minimo_pares = vector [i];
		}
		i++;
	}

	*minimo_impares = vector [1];
	for (i=3; i<DIM_VECTOR; i++)
	{
		if ((vector [i]) < (*minimo_impares))
		{
			*minimo_impares = vector [i];
		}
		i++;
	}
}

int main ()
{

	float vector [DIM_VECTOR], media_pares, media_impares, maximo_pares, maximo_impares, minimo_pares, minimo_impares;

	leer_vector (vector);
	media (vector, &media_pares, &media_impares);
	maximo (vector, &maximo_pares, &maximo_impares);
	minimo (vector, &minimo_pares, &minimo_impares);
	printf("\nLa nota media de los alumnos del examen A es: %f.", media_pares);
	printf("\nLa nota media de los alumnos del examen B es: %f.", media_impares);
	printf("\nLa nota máxima de los alumnos del examen A es: %f.", maximo_pares);
	printf("\nLa nota máxima de los alumnos del examen B es: %f.", maximo_impares);
	printf("\nLa nota mínima de los alumnos del examen A es: %f.", minimo_pares);
	printf("\nLa nota mínima de los alumnos del examen B es: %f.\n\n", minimo_impares);
	return (0);
}
