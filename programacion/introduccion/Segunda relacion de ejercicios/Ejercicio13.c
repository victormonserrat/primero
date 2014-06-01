#include <stdio.h>

int main ()
{
	int n, suma=0, i;

	printf("\nIntroduzca un número para conocer si se trata de un número perfecto o no: ");
	scanf("%i", &n);

	for (i=1; i<n; i++)
	{
		if ((n%i)==0)
		{
			suma = suma+i;
		}
	}

	if (suma==n)
	{
			printf("\nEl número (%i) introducido es perfecto\n\n", n);
	}
	
	else
	{
			printf("El número (%i) introducido NO es perfecto\n\n", n);
	}
	return (0);
}
