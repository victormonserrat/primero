#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Ejercicio6.h"

int menu ()
{

	int opcion;

	printf("\nPara introducir fichas introduzca un 1.");
	printf("\nPara jugar introduzca un 2.");
	printf("\nPara salir introduzca un 0.\n\n");
	scanf("%i", &opcion);
	return (opcion);
}

int introducir_monedas ()
{

	int fichas;

	printf("\nIntroduzca sus fichas: ");
	scanf("%i", &fichas);
	return (fichas);
}

int jugar (int saldo)
{

	int apuesta, opcion = 1, n, numero;

	if (saldo==0)
	{
		printf("\nSu saldo actual es de 0 fichas. Para poder jugar a la ruleta debe introducir fichas.\n");
	}
	else
	{
		printf("\n¿Cuántas fichas quiere apostar? ");
		scanf("%i", &apuesta);
		while (saldo<apuesta)
		{
			printf("\nSu apuesta es mayor a su saldo. Por favor, introduzca una cantidad menor: ");
			scanf("%i", &apuesta);
		}
		if (apuesta>0)
		{
			while ((opcion<1) || (opcion>3))
			printf("\n¿A qué prefiere apostar sus fichas?\n");
			printf("\nIntroduzca un 1 para apostar al color rojo (número par). Si este sale, ganará el doble de lo apostado.");
			printf("\nIntroduzca un 2 para apostar al color negro (número impar). Si este sale, ganará el doble de lo apostado.");
			printf("\nIntroduzca un 3 para apostar a un número concreto. Si este sale, ganará diez veces lo apostado.\n\n");
			scanf("%i", &opcion);
			switch (opcion)
			{
				case 1:
				{
					n = rand () % 33;
					if (n%2==0)
					{
						saldo = saldo + apuesta*2;
						printf("\n¡Enhorabuena! Ha salido %i rojo (par). Ha ganado %i fichas y su saldo actual es de %i fichas.\n", n, apuesta*2, saldo);
					}
					else
					{
						saldo = saldo - apuesta;
						printf("\nLo siento, ha salido %i negro (impar). Ha perdido %i fichas y su saldo actual es de %i fichas.\n", n, apuesta, saldo);
					}
					break;
				}
				case 2:
				{
					n = rand () % 33;
					if (n%2!=0)
					{
						saldo = saldo + apuesta*2;
						printf("\n¡Enhorabuena! Ha salido %i negro (impar). Ha ganado %i fichas y su saldo actual es de %i fichas.\n", n, apuesta*2, saldo);
					}
					else
					{
						saldo = saldo - apuesta;
						printf("\nLo siento, ha salido %i rojo (par). Ha perdido %i fichas y su saldo actual es de %i fichas.\n", n, apuesta, saldo);
					}
					break;
				}
				case 3:
				{
					n = rand () % 33;
					printf("\nIntroduce el número al que quiere apostar: ");
					scanf("%i", &numero);
					while ((numero<0) || (numero>32))
					{
						printf("\nEl número introducido no se encuentra en la ruleta. Por favor, introdúzcalo de nuevo: ");
						scanf("%i", &numero);
					}
					if (n==numero)
					{
						saldo = saldo + apuesta*10;
						printf("\n¡Enhorabuena! Ha salido %i. Ha ganado %i fichas y su saldo actual es de %i fichas.\n", n, apuesta*10, saldo);
					}
					else
					{
						saldo = saldo - apuesta;
						printf("\nLo siento, ha salido %i. Ha perdido %i fichas y su saldo actual es de %i fichas.\n", n, apuesta, saldo);
					}
					break;
				}
				default:
				{
					printf("\nEl número introducido no corresponde a ninguna opción. Por favor, introdúzcalo de nuevo.\n");
					break;
				}
			}
		}
	}
	return (saldo);
}
