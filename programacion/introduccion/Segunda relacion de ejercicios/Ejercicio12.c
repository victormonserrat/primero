#include <stdio.h>

int main ()
{
	int n, x, producto=1;

	printf("\nIntroduce un número para conocer el producto de sus dígitos: ");
	scanf("%i", &n);

	while (n!=0)
	{
		x = n%10;
		producto = producto * x;
		n = n/10;
	}
	printf("\nEl valor del producto de los dígitos es %i.\n\n", producto);
	return (0);
}
