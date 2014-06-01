#include <stdio.h>

double media (double x, double y)
{
	return ((x+y)/2);
}

void media_referencia (double x, double y, double *resultado)
{
	*resultado = (x+y)/2;
}

int main ()
{
	double x, y, *resultado, m;

	resultado = &m;
	printf("\nIntroduzca x: ");
	scanf("%lf", &x);
	printf("\nIntroduzca y: ");
	scanf("%lf", &y);
	printf("\nLa media de x e y con parámetros por valor es: %lf.", media (x, y));
	media_referencia (x, y, &m);
	printf("\nLa media de x e y con parámetros por referencia es: %lf.\n\n", *resultado);
	return (0);
}
