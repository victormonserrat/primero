#include <stdio.h>
#define DIM_VECTOR 100

void leerMatriz (int *m, int nFil, int nCol)
{
	int i, j;

	for (i=0; i<nFil; i++)
	{
		for (j=0; j<nCol; j++)
		{
			printf ("\nIntroduzca el elemento de la matriz [%i][%i]: ", i, j);
			scanf ("%i", m+(i*nCol+j));
		}
	}
}

void escribirMatriz (int *m, int nFil, int nCol)
{
	int i, j;

	for (i=0; i<nFil; i++)
	{
		printf ("\n");
		for (j=0; j<nCol; j++)
		{
			printf ("%5i", *(m+(i*nCol+j)));
		}
	}
	printf ("\n\n");
}

int main ()
{
	int vector [DIM_VECTOR], nFil, nCol;
	int *m;

	m = &(vector [0]);
	printf ("\nIntroduzca el número de filas que desea tener en su matriz: ");
	scanf ("%i", &nFil);
	printf ("\nIntroduzca el número de columnas que desea tener en su matriz: ");
	scanf ("%i", &nCol);
	leerMatriz (m, nFil, nCol);
	escribirMatriz (m, nFil, nCol);
	return (0);
}
