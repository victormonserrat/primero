#include <stdio.h>

int main()
{

	float valor1, valor2;
	
	printf("\nEscriba dos números para saber cual es el mayor de ellos: \n\n");
	scanf("%f %f", &valor1, &valor2);
	if (valor1==valor2)
	{
	printf("\nLos dos números son iguales.\n\n");
	}
	else (valor1>valor2) ? printf("\nEl número mayor es %f.\n\n", valor1) : printf("\nEl número mayor es %f.\n\n", valor2);
}
