#include <stdio.h>
#define DIM_VECTOR 100
#define DIM_MATRIZ 100

void leer_matriz (int nFilas, int nColumnas, int matriz[DIM_MATRIZ][DIM_MATRIZ])
{
	int i, j;

	printf("\nIntroduzca a continuación los elementos de la matriz:\n");
	for (i=0; i<nFilas; i++)
	{
		for (j=0; j<nColumnas; j++)
		{
			printf("\nIntroduzca el elemento [%i][%i]: ", i, j);
			scanf("%i", &matriz[i][j]);
		}
	}
}

void rotar_filas (int nFilas, int nColumnas, int matriz[DIM_MATRIZ][DIM_MATRIZ])
{
	int aux[DIM_VECTOR], i, j;

	for (j=0; j<nColumnas; j++)
	{
		aux[j] = matriz[0][j];
	}
	for (i=0; i<nFilas-1; i++)
	{
		for (j=0; j<nColumnas; j++)
		{
			matriz[i][j] = matriz[i+1][j];
		}
	}
	for (j=0; j<nColumnas; j++)
	{
		matriz[nFilas-1][j] = aux[j];
	}
}

void imprimir_matriz (int nFilas, int nColumnas, int matriz[DIM_MATRIZ][DIM_MATRIZ])
{
	int i, j;
	printf("\nLa matriz rotada es:\n\n");
	for (i=0; i<nFilas; i++)
	{
		for (j=0; j<nColumnas; j++)
		{
			printf("%5i", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main ()
{
	int nFilas, nColumnas, matriz[DIM_MATRIZ][DIM_MATRIZ];

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
	rotar_filas (nFilas, nColumnas, matriz);
	imprimir_matriz (nFilas, nColumnas, matriz);
	return (0);
}
