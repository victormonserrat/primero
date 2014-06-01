#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Ejercicio6.h"

int main ()
{
	int opcion = 1, saldo = 0;

	srand (time (NULL));

	printf("\nBienvenido al juego de la ruleta.\n");
	while (opcion!=0)
	{
		opcion = menu ();
		switch (opcion)
		{
			case 1:
			{
				saldo = saldo + introducir_monedas ();
				break;
			}
			case 2:
			{
				saldo = jugar (saldo);
				break;
			}
			case 0:
			{
				printf("\nGracias por haber jugado a la ruleta. Su saldo actual es de %i fichas. ¡Vuelva pronto!\n\n", saldo);
				break;
			}
			default:
			{
			printf("\nEl número introducido no corresponde a ninguna opción. Por favor, introdúzcalo de nuevo.");
			break;
			}
		}
	}
return (0);
}
