#include <stdio.h>
#define DIM_VECTOR 100
#define DIM_MATRIZ 100

void leer_matriz (int nFilas, int nColumnas, float matriz[DIM_MATRIZ][DIM_MATRIZ])
{
	int i, j;

	printf("\nIntroduzca a continuación los elementos de la matriz:\n");
	for (i=0; i<nFilas; i++)
	{
		for (j=0; j<nColumnas; j++)
		{
			printf("\nIntroduzca el elemento [%i][%i]: ", i, j);
			scanf("%f", &matriz[i][j]);
		}
	}
}

void imprimir_vector (int nColumnas, float vector[DIM_VECTOR])
{
	int i;
	printf("\nLas sumas de las columnas de la matriz introducida son:\n\n");
	for (i=0; i<nColumnas; i++)
	{
		printf("%10.2f", vector [i]);
	}
}

int main ()
{
	int nFilas, nColumnas, j, i;
	float matriz[DIM_MATRIZ][DIM_MATRIZ], suma, vector[DIM_VECTOR];

	printf("\n¿Cuántas filas desea introducir en su matriz? ");
	scanf("%i", &nFilas);
	while ((nFilas<1) || (nFilas>DIM_MATRIZ))
	{
		printf("\nEl número de filas de la matriz introducido no es válido. Deberá ser un número entre 1 y 100, introduzca de nuevo el número de filas: ");
		scanf("%i", &nFilas);
	}
	printf("\n¿Cuántas columnas desea introducir en su matriz? ");
	scanf("%i", &nColumnas);
	while ((nColumnas<1) || (nColumnas>DIM_MATRIZ))
	{
		printf("\nEl número de columnas de la matriz introducido no es válido. Deberá ser un número entre 1 y 100, introduzca de nuevo el número de columnas: ");
		scanf("%i", &nColumnas);
	}
	leer_matriz (nFilas, nColumnas, matriz);
	for (j=0; j<nColumnas; j++)
	{
		suma = 0;
		for (i=0; i<nFilas; i++)
		{
			suma = suma + matriz[i][j];
		}
		vector[j] = suma;
	}
	imprimir_vector (nColumnas, vector);
	printf("\n\n");
	return (0);
}
