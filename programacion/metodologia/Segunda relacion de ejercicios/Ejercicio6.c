#include <stdio.h>
#include "Ejercicio6.h"

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
