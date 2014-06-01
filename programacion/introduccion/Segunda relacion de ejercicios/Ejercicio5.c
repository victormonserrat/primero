#include <stdio.h>
#include <ctype.h>

int main()
{
	int x;

	printf("\nIntroduzca el código asociado del carácter a analizar: ");
	scanf("%i", &x);
	if ((x>=48) && (x<=57))
	{
		printf("\n\nEl código introducido (%i) corresponde a un dígito numérico y es imprimible.\n\n", x);
	}
	if ((x>=65) && (x<=90))
	{
		printf("\n\nEl código introducido (%i) corresponde a un carácter alfabético en letra mayúscula y es imprimible.\n\n", x);
	}
	if ((x>=97) && (x<=122))
	{
		printf("\n\nEl código introducido (%i) corresponde a un carácter alfabético en letra minúscula y es imprimible.\n\n", x);
	}
	if (((x>=32) && (x<=47)) || ((x>=58) && (x<=64)) || ((x>=91) && (x<=96)) || ((x>=123) && (x<=126)))
	{
		printf("\n\nEl código introducido (%i) es imprimible pero no corresponde a un dígito numérico ni a un caráctter alfabético.\n\n", x);
	}
	if ((x<32) || (x>126))
	{
		printf("\n\nEl código introducido (%i) no corresponde a un carácter imprimible.\n\n", x);
	}

return(0);
}
