#include <stdio.h>
#include "Ejercicio6.h"

int** multiplicarMatrices (int **matriz1, int **matriz2, int nFil1, int nFil2, int nCol1, int nCol2)
{
	int **producto, i, j, k;

	producto = reservarMemoria (nFil1, nCol2);
	for (i=0; i<nFil1; i++)
	{
		for (j=0; j<nCol2; j++)
		{
			for (k=0; k<nCol1; k++)
			{
				producto [i][j] = (producto [i][j] + (matriz1 [i][k]*matriz2 [k][j]));
			}
		}
	}
	return (producto);
}

void leerMatriz (int **matriz, int nFil, int nCol)
{
	int i, j;

	for (i=0; i<nFil; i++)
	{
		for (j=0; j<nCol; j++)
		{
			printf("\nEscribe el elemento de la matriz [%i][%i]: ", i, j);
			scanf("%i", &(matriz [i][j]));
		}
	}
}

int main ()
{
	int **matriz1, **matriz2, **producto, nFil1, nFil2, nCol1, nCol2;

	printf("\nIntroduzca el número de filas de la primera matriz: ");
	scanf("%i", &nFil1);
	printf("\nIntroduzca el número de columnas de la primera matriz: ");
	scanf("%i", &nCol1);
	printf("\nIntroduzca el número de filas de la segunda matriz: ");
	scanf("%i", &nFil2);
	printf("\nIntroduzca el número de columnas de la segunda matriz: ");
	scanf("%i", &nCol2);
	if (nCol2==nFil1)
	{
		matriz1 = reservarMemoria (nFil1, nCol1);
		matriz2 = reservarMemoria (nFil2, nCol2);
		leerMatriz (matriz1, nFil1, nCol1);
		leerMatriz (matriz2, nFil2, nCol2);
		producto = multiplicarMatrices (matriz1, matriz2, nFil1, nFil2, nCol1, nCol2);
		printf("\nLa matriz producto es:\n");
		imprimeMatriz (producto, nFil1, nCol2);
	}
	else
	{
		printf("\nLas matrices no se pueden multiplicar.\n\n");
	}
	return (0);
}
