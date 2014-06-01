#include <stdio.h>

int main()
{
	unsigned int x, y, n;

	printf("\nIntroduce el número que quiere multiplicar: ");
	scanf("%i", &x);
	printf("\n\nIntroduce el número por el que quiere multiplicar el anterior: ");
	scanf("%i", &y);
	n = x;

	while (y>1)
	{
		x = x+n;
		y = y-1;
	}
	printf("\nEl valor de la multiplicación es %i.\n\n", x);
	return (0);
}
