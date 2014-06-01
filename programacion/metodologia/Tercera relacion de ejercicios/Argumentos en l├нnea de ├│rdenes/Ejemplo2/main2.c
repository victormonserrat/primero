#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc/*Número de argumentos*/, char ** argv/*Puntero a vector que contiene los argumentos (cadenas)*/)
{
	char nombre [100];
	
	if (argc != 2) //Es recomendable comprobar que los argumetnos han sido introducidos correctamente.
	{
		printf("\nERROR en el número de parámetros introducido.\n");
		printf("\nSintáxis establecida: %s <nombreFichero>\n\n", argv [0]);
		exit (-1);
	}
	strcpy (nombre , argv [1]);
	printf("\nEl nombre del fichero es %s.\n\n", nombre);
	return (0);
}
