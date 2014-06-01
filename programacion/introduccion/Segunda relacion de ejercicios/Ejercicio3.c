#include <stdio.h>
#include <math.h>

int main()
{
int opcion;
float r, longitud_circunferencia, area_circunferencia, area_esfera, volumen_esfera;
	
	printf("\nEscriba el número correspondiente a la opción que se desea conocer.\n\nLongitud de una circunferencia= 1.\nÁrea de una circunferencia= 2.\nÁrea de una esfera= 3.\nVolumen de una esfera =4.\n\n");
	scanf("%i", &opcion);
	printf("\nEscriba el valor del radio: ");
	scanf("%f", &r);
	longitud_circunferencia = 2*M_PI*r;
	area_circunferencia = M_PI*r*r;
	area_esfera = 4*M_PI*r*r;
	volumen_esfera = (4*M_PI*r*r*r)/3;
	
	switch(opcion)
	{
	case 1:
		printf("\nLa longitud de la circunferencia es: %f.\n\n", longitud_circunferencia);
		break;
	case 2:
		printf("\nLa longitud de la circunferencia es: %f.\n\n", area_circunferencia);
		break;
	case 3:
		printf("\nLa longitud de la circunferencia es: %f.\n\n", area_esfera);
		break;
	case 4:
		printf("\nLa longitud de la circunferencia es: %f.\n\n", volumen_esfera);
		break; 
	default:
		printf("\nEl número que ha escrito no corresponde con ninguna opción a elegir.\n\n");
	}
}
