#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct monomio
{
	float coeficiente;
	int exponente;
	struct monomio *siguiente;
};

struct monomio *nuevoMonomio ();
void anyadeMonomio (struct monomio **polinomio, float coeficiente, int exponente);
void eliminaMonomio (struct monomio **polinomio, int E);
void evaluaPolinomio (struct monomio *polinomio, float x);
void muestraPolinomio (struct monomio *polinomio);

struct monomio *nuevoMonomio ()
{
	return ((struct monomio*) malloc (sizeof(struct monomio)));
}

void anyadeMonomio (struct monomio **polinomio, float coeficiente, int exponente)
{
	struct monomio *nuevo = NULL;
	
	nuevo = nuevoMonomio ();
	nuevo->coeficiente = coeficiente;
	nuevo->exponente = exponente;
	nuevo->siguiente = *polinomio;
	*polinomio = nuevo;
}

void eliminaMonomio (struct monomio **polinomio, int E)
{
	struct monomio *anterior = NULL;
	struct monomio *aux = NULL;
	
	aux = *polinomio;
	while (aux->exponente != E)
	{
		anterior = aux;
		aux = aux->siguiente;
	}
	if (aux == *polinomio)
	{
		*polinomio = aux->siguiente;
		free (aux);
	}
	else
	{
		anterior->siguiente = aux->siguiente;
		free (aux);
	}
}

void evaluaPolinomio (struct monomio *polinomio, float x)
{
	struct monomio *aux = NULL;
	float valor=0;
	
	aux = polinomio;
	while (aux != NULL)
	{
		valor = valor + aux->coeficiente * pow (x, aux->exponente);
		aux = aux->siguiente;
	}
	printf("%.2f.", valor);
}

void muestraPolinomio (struct monomio *polinomio)
{
	struct monomio *aux = NULL;
	
	aux = polinomio;
	printf("\n");
	while (aux != NULL)
	{
		if (aux->coeficiente > 0)
		{
			printf(" +%.2fx^%i", aux->coeficiente, aux->exponente);
		}
		if (aux->coeficiente < 0)
		{
			printf (" %.2fx^%i", aux->coeficiente, aux->exponente);
		}
		aux = aux->siguiente;
	}
	printf(".\n\n");
}

int main ()
{
	int n, coeficiente, exponente, E;
	float i;
	struct monomio *polinomio = NULL;

	printf("\nIntroduzca el número de monomios que tiene su polinomio: ");
	scanf("%i", &n);
	while (n<1)
	{
		printf("\nEl número introducido no es válido. Por favor, introdúzcalo de nuevo: ");
		scanf("%i", &n);
	}
	for (i=0.0; i<n; i=i+1.0)
	{
		printf("\nIntroduzca el coeficiente del monomio: ");
		scanf("%i", &coeficiente);
		printf("\nIntroduzca el exponente del monomio: ");
		scanf("%i", &exponente);
		anyadeMonomio (&polinomio, coeficiente, exponente);
	}
	for (i=0; i<=5; i = i+0.5)
	{
		printf("\nPara x = %.1f, ", i);
		evaluaPolinomio (polinomio, i);
	}
	printf("\n\nInserta el exponente del monomio que desea borrar: ");
	scanf("%i", &E);
	eliminaMonomio (&polinomio, E);
	muestraPolinomio (polinomio);
	return (0);
}
