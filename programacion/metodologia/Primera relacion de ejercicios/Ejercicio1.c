#include <stdio.h>

int main ()
{
	int a, *b, **c;
	double d, *e, **f;

	printf("\nEl tamaño del dato de tipo int es %li bytes.", sizeof (a));
	printf("\nEl tamaño del dato de tipo int* es %li bytes.", sizeof (*b));
	printf("\nEl tamaño del dato de tipo int** es %li bytes.", sizeof (**c));
	printf("\nEl tamaño del dato de tipo double es %li bytes.", sizeof (d));
	printf("\nEl tamaño del dato de tipo double* es %li bytes.", sizeof (*e));
	printf("\nEl tamaño del dato de tipo double** es %li bytes.\n\n", sizeof (**f));
	return (0);
}
