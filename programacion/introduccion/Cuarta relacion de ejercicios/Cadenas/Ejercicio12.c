#include <stdio.h>
#include <string.h>
#define DIM_CHAR 100

int main ()
{

	char cadena [DIM_CHAR], subcadena [DIM_CHAR];
	int n, longitud, i;
    
	printf("\nIntroduzca una cadena de carácteres: ");
	fgets(cadena, DIM_CHAR, stdin);
	cadena [strlen (cadena)-1] = '\0';
	printf ("\n¿Por qué carácter quiere cortar la cadena y transformarla en una subcadena? ");
	scanf("%i", &n);
	strcpy(subcadena, cadena);
	longitud = strlen(cadena);
	for (i=n; i<=longitud; i++)
	{
		subcadena [i] = '\0';
	}
	printf("\nLa cadena introducida fue: \"%s\".", cadena);
	printf("\n\nLa subcadena que resulta de cortar la original por el carácter %i es: \"%s\".\n\n", n, subcadena);
	return (0);
}
