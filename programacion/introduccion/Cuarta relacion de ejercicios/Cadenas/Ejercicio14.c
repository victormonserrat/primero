#include <stdio.h>
#include <string.h>
#define DIM_CHAR 100
 
 int main ()
{
 
	char cadena1 [DIM_CHAR], cadena2 [DIM_CHAR];
	int longitud1, longitud2, i, j, contador = 0;

	printf("\nIntroduce una palabra: ");
	fgets(cadena1, DIM_CHAR, stdin);
	printf("\nIntroduce otra palabra: ");
	fgets(cadena2, DIM_CHAR, stdin);
	cadena1[strlen(cadena1) - 1 ] = '\0';
	cadena2[strlen(cadena2) - 1 ] = '\0';
	longitud1 = strlen(cadena1);
	longitud2 = strlen(cadena2);
	if (strlen (cadena1) != strlen (cadena2))
    	{
		printf ("\nLas palabras NO son anagramas.\n\n");
	}
	else
	{
		for (i=0; i<longitud1; i++)
		{
			for (j=0; j<longitud2; j++)
			{
				if (cadena1 [i] == cadena2 [j])
				{
					contador = contador+1;
					cadena1 [i] = '1';
					cadena2 [j] = '0';
				}
			}
		}
		if (contador == longitud1)
		{
			printf ("\nLas palabras son anagramas.\n\n");
		}
		else
		{
			printf ("\nLas palabras NO son anagramas.\n\n");
		}
	}
	return (0);
}
