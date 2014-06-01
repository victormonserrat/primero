#include "Ejercicio5.h"

int factorial (int aux)
{
	int i, factorial = 1;

	for (i=1; i<=aux; i++)
	{
		factorial = factorial*i;
	}
	return (factorial);
}
