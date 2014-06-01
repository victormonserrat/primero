//Utilidad del programa:
/*
Cuenta el número de números pares e impares introducidos.
*/

//Inclusión de librerias:
#include <stdio.h>

//Definición de constantes:

//Declaración de variables:
int main()
{
	int x, pares, impares;
	pares = 0;
	impares = 0;

	//Pedida y entrada de datos:
	printf("\nIntroduzca los números separados por coma, introduciendo al final un -1 para que el programa se inicie. \"Ejemplo: 1, 2, 3, ..., n, -1\". Si desea conocer si el número -1 es par o impar, introduzca un 1");
	while (x != -1)
	{
		scanf("\n%i", &x);
	
	//Cálculos:
		while (x !=0)
		{
			if (x % 2 == 0)
			{
				pares = pares +1;
			}
			if (x % 2 != 0)
			{
				impares = impares +1;
			}
		}
	
	//Salida de datos:
	printf("\nEl número de números pares introducidos es %i y el de impares %i.\n\n", pares, impares);
	}
return(0);
}

