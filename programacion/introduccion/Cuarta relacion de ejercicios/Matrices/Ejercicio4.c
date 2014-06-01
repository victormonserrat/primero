#include <stdio.h>
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

void invertir_matriz (int nFilas, int nColumnas, int matriz[DIM_MATRIZ][DIM_MATRIZ], int matriz_inversa[DIM_MATRIZ][DIM_MATRIZ])
{
	int i, j;

	for (i=nFilas-1; i>=0; i--)
	{
		for (j=nColumnas-1; j>=0; j--)
		{
			matriz_inversa[i][j] = matriz[nFilas-1-i][nColumnas-1-j];
		}
	}
}

void imprimir_matriz (int nFilas, int nColumnas, int matriz_inversa[DIM_MATRIZ][DIM_MATRIZ])
{
	int i, j;
	printf("\nLa matriz inversa a la introducida es:\n\n");
	for (i=0; i<nFilas; i++)
	{
		for (j=0; j<nColumnas; j++)
		{
			printf("%5i", matriz_inversa[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main ()
{
	int nFilas, nColumnas, matriz[DIM_MATRIZ][DIM_MATRIZ], matriz_inversa[DIM_MATRIZ][DIM_MATRIZ];

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
	invertir_matriz (nFilas, nColumnas, matriz, matriz_inversa);
	imprimir_matriz (nFilas, nColumnas, matriz_inversa);
	return (0);
}
