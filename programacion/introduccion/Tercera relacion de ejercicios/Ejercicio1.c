#include <stdio.h>
#include <math.h>

void menu (void)
{
	printf("\nPara calcular el área de un cuadrado introduzca:      1");
	printf("\nPara calcular el área de un círculo introduzca:       2");
	printf("\nPara calcular el área de un triángulo introduzca:     3");
	printf("\nPara salir del programa introduzca:                   0\n\n");
}

float area_cuadrado (float lado)
{
	float area;

	area = lado*lado;
	return (area);
}

float area_circulo (float radio)
{
	float area;

	area = M_PI*radio*radio;
	return (area);
}

float area_triangulo (float base, float altura)
{
	float area;
	area = (base*altura)/2;
	return (area);
}

int main ()
{
	int opcion;
	float lado, radio, base, altura, area;

	while (opcion!=0)
	{
		menu ();
		scanf("%i", &opcion);
		switch (opcion)
		{
			case 1:
			{
				printf("\nIntroduzca el valor del lado: ");
				scanf("%f", &lado);
				area = area_cuadrado (lado);
				printf("\nEl área del cuadrado es: %f unidades cuadradas.\n", area);
				break;
			}
			case 2:
			{
				printf("\nIntroduzca el valor del radio: ");
				scanf("%f", &radio);
				area = area_circulo (radio);
				printf("\nEl área del círculo es: %f unidades cuadradas.\n", area);
				break;
			}
			case 3:
			{
				printf("\nIntroduzca el valor de la base: ");
				scanf("%f", &base);
				printf("\nIntroduzca el valor de la altura: ");
				scanf("%f", &altura);
				area = area_triangulo (base, altura);
				printf("\nEl área del triángulo es: %f unidades cuadradas.\n", area);
				break;
			}
			case 0:
			{
				printf("\nGracias por el uso de este programa.\n\n");
				break;
			}
			default:
			{
				printf("\nEl número introducido no es correcto. Por favor, introdúzcalo de nuevo.\n");
			}
		}
	}
	return (0);
}
