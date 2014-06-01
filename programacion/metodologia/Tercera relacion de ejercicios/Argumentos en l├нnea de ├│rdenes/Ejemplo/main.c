#include <stdio.h>
#include <stdlib.h>

int main (int argc/*Número de argumentos*/, char ** argv/*Puntero a vector que contiene los argumentos (cadenas)*/)
{
	int num1, num2;
	
	if (argc != 3) //Es recomendable comprobar que los argumetnos han sido introducidos correctamente.
	{
		printf("\nERROR en el número de parámetros introducido.\n");
		printf("\nSintáxis establecida: %s <num1> <num2>\n\n", argv [0]);
		exit (-1);
	}
	num1 = atoi (argv [1]);
	num2 = atoi (argv [2]);
	printf("\nLa suma de los números es %i.\n\n", num1+num2);
	return (0);
}
