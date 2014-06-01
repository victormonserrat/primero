#include <stdio.h>
#define DIM_VECTOR 100

int main ()
{

	int elementos, opcion, ultimo=0, vector [DIM_VECTOR], eliminar, i, contar=0, menor;

	printf("\n¿Cuántos elementos quiere que tenga su vector? ");
	scanf("%i", &elementos);
	while (elementos>100)
	{
		printf("\nLo siento, el vector solo puede tener un máximo de 100 elementos, introduzca un número menor: ");
		scanf("%i", &elementos);
	}
	do
	{
		printf("\n¿Qué desea hacer con su vector?");
		printf("\n\nPara añadir un elemento al vector, introduzca 1.");
		printf("\nPara eliminar un elemento al vector, introduzca 2.");
		printf("\nMostrar el contenido del vector, introduzca 3.");
		printf("\nPara contar el número de divisores de 15 que hay en el vector, introduzca 4.");
		printf("\nPara calcular el mínimo de los elementos del vector, introduzca 5.");
		printf("\nPara salir, introduzca 0.\n\n");
		scanf("%i", &opcion);
		switch (opcion)
		{
			case 1:
			{
				if (ultimo<elementos)
				{
					printf("\nIntroduzca el elemento: ");
					scanf("%i", &vector [ultimo]);
					ultimo++;
				}
				else
				{
					printf("\nLo siento, el vector ya está lleno.\n");
				}
				break;
			}
			case 2:
			{
				if (ultimo!=0)
				{
					printf("\nIndique la posición en el vector del elemento que quiere eliminar: ");
					scanf("%i", &eliminar);
					while (eliminar>=ultimo)
					{
						printf("\nLa posición en el vector del elemento que quiere eliminar está vacía, por favor introdúzcala de nuevo: ");
						scanf("%i", &eliminar);
					}
					for (i=0; i<ultimo-eliminar; i++)
					{
						vector [eliminar+i] = vector [eliminar+i+1];
					}
					ultimo--;
				}
				else
				{
					printf("\nLo siento, el vector está vacío.\n");
				}
				break;	
			}
			case 3:
			{
				printf("\nEl contenido de su vector es el siguiente:\n");
				printf("\nPosición     Elemento\n");
				for (i=0; i<ultimo; i++)
				{
					printf("\n");
					printf("   [%i]  %10i", i, vector [i]);
					printf("\n");
				}
				break;
			}
			case 4:
			{
				for (i=0; i<ultimo; i++)
				{
					if (vector [i] % 15 == 0)
					{
						contar = contar+1;
					}
				}
				printf("\nEl número de divisores de 15 que hay en el vector es: %i.\n", contar);
				break;
			}
			case 5:
			{
				menor = vector [0];
				for (i=1; i<ultimo; i++)
				{
					if (vector [i] < vector [i-1])
					{
						menor = vector [i];
					}
				}
				printf("\nEl mínimo número de los elementos es: %i.\n", menor);
				break;	
			}
			case 0:
			{
				printf("\n");
				break;
			}
			default:
			{
				printf("\nEl número introducido no corresponde a ninguna opción, por favor introdúzcalo de nuevo.\n");
				break;
			}
		}
	}
	while (opcion!=0);
	return (0);
}
