#include <stdio.h>
#include <stdlib.h>
#define DIM_CHAR 100
 
int main ()
{

	char cadena [DIM_CHAR];
	long int numero;

	printf ("\n\nIntroduzca una cadena de un número real para convertirlo a doble: ");
	fgets  (cadena, DIM_CHAR, stdin);
	sscanf (cadena, "%li", &numero);
	printf( "\nSu cadena convertida es: <%li>\n\n", numero);
	return (0);
}
