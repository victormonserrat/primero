#include <stdio.h>
#include <string.h>
#define DIM_CHAR 100

int es_prefijo (char *cadena, char *prefijo)
{
	char *ptr;

	ptr = strstr (cadena, prefijo);
	if (ptr-cadena == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main ()
{
	char cadena [DIM_CHAR], prefijo [DIM_CHAR];
	int resultado;

	printf("\nIntroduzca la palabra para ver si contiene un prefijo: ");
	fgets (cadena, DIM_CHAR, stdin);
	cadena [strlen (cadena) -1] = '\0';
	printf("\nIntroduzca el prefijo: ");
	fgets (prefijo, DIM_CHAR, stdin);
	prefijo [strlen (prefijo) -1] = '\0';
	resultado = es_prefijo (cadena, prefijo);
	if (resultado == 0)
	{
		printf("\nEl prefijo \"%s\" NO es prefijo de la palabra \"%s\".\n\n", prefijo, cadena);
	}
	else
	{
		printf("\nEl prefijo \"%s\" es prefijo de la palabra \"%s\".\n\n", prefijo, cadena);
	}
	return (0);
}
