#include <stdio.h>
#include <stdlib.h>

int** reservarMemoria (int nFil, int nCol)
{
	int i;
	int **matriz;

	matriz=(int**)malloc(nFil*sizeof(int*));
	for (i=0; i<nFil; i++)
	{
		matriz [i] = (int*)malloc(nCol*sizeof(int));
	}
	return (matriz);
}

void rellenaMatriz (int **matriz, int nFil, int nCol)
{
	int i, j;

	for (i=0; i<nFil; i++)
	{
		for (j=0; j<nCol; j++)
		{
			matriz [i][j] = i+j;
		}
	}
}

void imprimeMatriz (int **matriz, int nFil, int nCol)
{
	int i, j;

	for (i=0; i<nFil; i++)
	{
		printf("\n");
		for (j=0; j<nCol; j++)
		{
			printf("%5i", matriz [i][j]);
		}
	}
	printf("\n\n");
}

int** eliminarFila (int **matriz, int nFil, int nCol, int fila_borrada)
{
	int i, j, **aux;

	aux = reservarMemoria (nFil-1, nCol);
	for (i=0; i<fila_borrada; i++)
	{
		for (j=0; j<nCol; j++)
		{
			aux [i][j] = matriz [i][j];
		}
	}
	for (i=fila_borrada+1; i<nFil; i++)
	{
		for (j=0; j<nCol; j++)
		{
			aux [i-1][j] = matriz [i][j];
		}
	}
	return (aux);
}

void liberarMemoria (int ***matriz, int nFil)
{
	int i;

	for (i=0; i<nFil; i++)
	{
		free ((*matriz)[i]);
	}
	free (*matriz);
}

int main ()
{
	int nFil, nCol, **matriz, fila_borrada;

	printf("\nIntroduzca el número de filas que tiene su matriz: ");
	scanf("%i", &nFil);
	printf("\nIntroduzca el número de columnas que tiene su matriz: ");
	scanf("%i", &nCol);
	matriz = reservarMemoria (nFil, nCol);
	rellenaMatriz (matriz, nFil, nCol);
	imprimeMatriz (matriz, nFil, nCol);
	printf("Introduzca el número de fila que desea borrar: ");
	scanf("%i", &fila_borrada);
	matriz = eliminarFila (matriz, nFil, nCol, fila_borrada);
	imprimeMatriz (matriz, nFil-1, nCol);
	liberarMemoria (&matriz, nFil);
	return (0);
}
