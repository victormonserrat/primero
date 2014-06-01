#include <stdio.h>
#include <stdlib.h>

struct pila
{
	int X;
	struct pila *siguiente;
};

struct pila *nuevoElemento ()
{
	return ((struct pila*) malloc (sizeof(struct pila)));
}

int contarContenedores (struct pila **contenedores)
{
	int X, cuenta=0;
	struct pila *aux;
	
	aux = NULL;
	
	while (*contenedores != NULL)
	{
		X = pop (contenedores);
		push (&aux, X);
		cuenta++;
	}
	while (aux != NULL)
	{
		X = pop (&aux);
		push (contenedores, X);
	}
	return (cuenta);
}

int buscarContenedor (struct pila **contenedores, int n)
{
	int encontrado=0, X;
	struct pila *aux;
	
	aux = NULL;
	
	while (*contenedores != NULL)
	{
		X = pop (contenedores);
		if (X == n)
		{
			encontrado = 1;
		}
		push (&aux, X);
	}
	while (aux != NULL)
	{
		X = pop (&aux);
		push (contenedores, X);
	}
	return (encontrado);
}

int sacarContenedor (struct pila **contenedores, int n)
{
	int encontrados = 0, X;
	struct pila *aux;
	
	aux = NULL;
	
	while (*contenedores != NULL)
	{
		X = pop (contenedores);
		if (X != n)
		{
			push (&aux, X);
		}
		else
		{
			encontrados++;
		}
	}
	while (aux != NULL)
	{
		X = pop (&aux);
		push (contenedores, X);
	}
	return (encontrados);
}

void listarContenedores (struct pila *contenedores)
{
	while (contenedores != NULL)
	{
		printf("\nEl código de este contenedor es el \"%i\".", pop (&contenedores));
	}
}

int main ()
{
	struct pila *contenedores;
	int nEle, X, opcion=1, num=0, n;
	
	printf("\nIntroduzca el número de contenedores máximo que tiene de capacidad: ");
	scanf("%i", &nEle);
	while (opcion != 0)
	{
		printf("\nIntroduzca un 1 para apilar un nuevo contenedor.");
		printf("\nIntroduzca un 2 para conocer el número de contenedores apilados.");
		printf("\nIntroduzca un 3 para buscar un contenedor por su código.");
		printf("\nIntroduzca un 4 para sacar un contenedor.");
		printf("\nIntroduzca un 5 para listar los contenedores.");
		printf("\nIntroduzca un 0 para salir del programa.");
		printf("\n\nIntroduzca a continuación el número correspondiente a la opción deseada: ");
		scanf("%i", &opcion);
		switch (opcion)
		{
			case 0:
			{
				opcion = 0;
				printf("\nGracias por usar nuestro programa.\n\n");
				break;
			}
			case 1:
			{
				if (num < nEle)
				{
					printf("\nIntroduzca el código del contenedor: ");
					scanf("%i", &X);
					push (&contenedores, X);
					num++;
				}
				else
				{
					printf("\nLa pila de contenedores está llena, borre alguno o si desea puede crear una pila de mayor capacidad.\n");
				}
				break;
			}
			case 2:
			{
				printf("\nEl número de contenedores que existen es de %i.\n", contarContenedores (&contenedores));
				break;
			}
			case 3:
			{
				printf("\nIntroduzca el código del contenedor que desea conocer si está: ");
				scanf("%i", &n);
				if (buscarContenedor (&contenedores, n) == 1)
				{
					printf("\nEl contenedor con código \"%i\", se ha encontrado.\n", n);
				}
				else
				{
					printf("\nNo se ha podido encontrar el contenedor con código \"%i\".\n", n);
				}
				break;
			}
			case 4:
			{
				printf("\nIntroduzca el código del contenedor que desea sacar: ");
				scanf("%i", &n);
				if (sacarContenedor (&contenedores, n) != 0)
				{
					printf("\nEl contenedor con código \"%i\" ha sido sacado correctamente.\n", n);
					num--;
				}
				else
				{
					printf("\nNo se ha podido encontrar el contenedor con código \"%i\".\n", n);
				}
				break;
			}
			case 5:
			{
				printf("\nLa lista de contenedores es la siguiente:\n");
				listarContenedores (contenedores);
				printf("\n");
				break;
			}
		}
	}
	return (0);
}
