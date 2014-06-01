#include <stdio.h>
#define DIM_MATRIZ 100

struct matriz
{
        int nFilas;
        int nColumnas;
        int matriz [DIM_MATRIZ][DIM_MATRIZ];
};

struct matriz leer_matriz (struct matriz matriz1);
void imprimir_matriz (struct matriz matriz1);
int sumar_elementos (struct matriz matriz1);

int main ()
{
        struct matriz matriz1;
	int suma;

        printf("\nIntroduzca el número de filas de su matriz: ");
        scanf("%i", &(matriz1.nFilas));
        while ((matriz1.nFilas<1) || (matriz1.nFilas>DIM_MATRIZ))
	{
		printf("\nEl número de filas de la matriz introducido no es válido. Deberá ser un número entre 1 y 100, introduzca de nuevo el número de filas: ");
		scanf("%i", &(matriz1.nFilas));
	}
        printf("\nIntroduzca el número de columnas de su matriz: ");
        scanf("%i", &(matriz1.nColumnas));
	while ((matriz1.nColumnas<1) || (matriz1.nColumnas>DIM_MATRIZ))
	{
		printf("\nEl número de columnas de la matriz introducido no es válido. Deberá ser un número entre 1 y 100, introduzca de nuevo el número de columnas: ");
		scanf("%i", &(matriz1.nColumnas));
	}
	if (matriz1.nFilas == matriz1.nColumnas)
	{
		matriz1 = leer_matriz (matriz1);
		imprimir_matriz (matriz1);
		suma = sumar_elementos (matriz1);
		printf("La suma de los elementos por encima de la diagonal de la matriz es: %i.\n\n", suma);
		return (0);
	}
	else
	{
		printf("La matriz no es cuadrada, por lo tanto no tiene diagonal.\n\n");
		return (0);
	}
}

struct matriz leer_matriz (struct matriz matriz1)
{
	int i, j;

	printf("\nIntroduzca a continuación los elementos de la matriz:\n");
	for (i=0; i<matriz1.nFilas; i++)
	{
		for (j=0; j<matriz1.nColumnas; j++)
		{
			printf("\nIntroduzca el elemento [%i][%i]: ", i, j);
			scanf("%i", &(matriz1.matriz [i][j]));
		}
	}
	return (matriz1);
}

void imprimir_matriz (struct matriz matriz1)
{
	int i, j;
	printf("\nLa matriz introducida es:\n\n");
	for (i=0; i<matriz1.nFilas; i++)
	{
		for (j=0; j<matriz1.nColumnas; j++)
		{
			printf("%5i", matriz1.matriz [i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int sumar_elementos (struct matriz matriz1)
{
	int i, j, suma = 0;

	for (i=0; i<matriz1.nFilas; i++)
	{
		for (j=i+1; j<matriz1.nColumnas; j++)
		{
			suma = suma + matriz1.matriz [i][j];
		}
	}
	return (suma);
}
