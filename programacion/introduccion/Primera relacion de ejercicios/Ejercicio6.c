#include <stdio.h>
#define T 1024

int main()
{
	int x, megabytes, kilobytes, bytes;

	printf("\nIntroduzca el número de Bytes que desea convertir: ");
	scanf("%i", &x);
	megabytes= x / (T * T);
	kilobytes= (x % (T * T)) / T;
	bytes= (x % (T * T)) % T;
	printf("\nEl valor del número de Bytes introducido es de: %i Megabytes, %i Kilobytes y %i Bytes.\n\n", megabytes, kilobytes, bytes);
	return(0);
}
