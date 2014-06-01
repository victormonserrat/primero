#include <stdio.h>

int main ()
{
	int m, n, aux, factorialm, factorialn, factorialresta, resultado;

	printf("\nIntroduce el número combinatorio superior: ");
	scanf("%i", &m);
	printf("\nIntroduce el número combinatorio inferior: ");
	scanf("%i", &n);
	aux = m;
	factorialm = factorial (aux);
	aux = n;
	factorialn = factorial (aux);
	aux = m-n;
	factorialresta = factorial (aux);
	resultado = factorialm/(factorialn*factorialresta);
	printf("\nEl resultado de los números combinatorios es: %i.\n\n", resultado);
	return (0);
}
