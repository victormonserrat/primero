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

void cambiar_filas (int nFilas, int nColumnas, int matriz[DIM_MATRIZ][DIM_MATRIZ], int matriz_cambiada[DIM_MATRIZ][DIM_MATRIZ])
{
	int i, j, cambiar_fila, por_fila;

	printf("\n¿Qué fila de la matriz quiere cambiar? ");
	scanf("%i", &cambiar_fila);
	while ((cambiar_fila > nFilas-1) || (cambiar_fila < 0))
	{
		printf("\nLa fila introducida no existe. Por favor, introdúzcala de nuevo: ");
		scanf("%i", &cambiar_fila);
	}
	printf("\n¿Por qué fila de la matriz la quiere cambiar? ");
	scanf("%i", &por_fila);
	while ((por_fila > nFilas-1) || (por_fila < 0))
	{
		printf("\nLa fila introducida no existe. Por favor, introdúzcala de nuevo: ");
		scanf("%i", &por_fila);
	}
	for (i=0; i<nFilas; i++)
	{
		for (j=0; j<nColumnas; j++)
		{
			matriz_cambiada [i][j] = matriz [i][j];
		}
	}
	for (j=0; j<nColumnas; j++)
	{
		matriz_cambiada [cambiar_fila][j] = matriz [por_fila][j];
		matriz_cambiada [por_fila][j] = matriz [cambiar_fila][j];
	}
}

void imprimir_matriz (int nFilas, int nColumnas, int matriz_cambiada[DIM_MATRIZ][DIM_MATRIZ])
{
	int i, j;
	printf("\nLa matriz cambiada es:\n\n");
	for (i=0; i<nFilas; i++)
	{
		for (j=0; j<nColumnas; j++)
		{
			printf("%5i", matriz_cambiada[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main ()
{
	int nFilas, nColumnas, matriz[DIM_MATRIZ][DIM_MATRIZ], matriz_cambiada[DIM_MATRIZ][DIM_MATRIZ];

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
	cambiar_filas (nFilas, nColumnas, matriz, matriz_cambiada);
	imprimir_matriz (nFilas, nColumnas, matriz_cambiada);
	return (0);
}
