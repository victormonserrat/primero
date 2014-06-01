#include <stdio.h>
#include <math.h>
#define DIM_VECTOR 100

void leer_polinomio (int coeficientes, int vector [])
{
	int i;

	if (coeficientes==1)
	{
		printf("\nIntroduce el único coeficiente: ");
		scanf("%i", &vector [0]);
	}
	else
	{
		printf("\nIntroduce el primer coeficiente: ");
		scanf("%i", &vector [0]);
		for (i=1;i<coeficientes-1; i++)
		{
			printf("\nIntroduce el siguiente coeficiente: ");
			scanf("%i", &vector [i]);
		}
		printf("\nIntroduce el último coeficiente: ");
		scanf("%i", &vector [coeficientes-1]);
	}
}

void mostrar_polinomio (int coeficientes, int vector[])
{
	int i;
	
	printf("\nA continuación se mostrará su polinomio:\n");
	if (coeficientes==1)
	{
		printf("%i", vector [coeficientes-1]);
	}
	if (coeficientes==2)
	{
		if (vector [coeficientes-2]!=1 && vector [coeficientes-2]!=-1)
		{		
		printf("%ix", vector [coeficientes-2]);
		}
		if (vector [coeficientes-2]==1)
		{		
		printf("x");
		}
		if (vector [coeficientes-2]==-1)
		{		
		printf("-x");
		}
		if (vector [coeficientes-1]>0)
		{
			printf(" +%i", vector [coeficientes-1]);
		}
		if (vector [coeficientes-1]<0)
		{
			printf(" %i", vector [coeficientes-1]);
		}
	}
	if (coeficientes>2)
	{
		if (vector [0]>1 || vector [0]<-1)
		{
		printf("%ix^%i", vector [0], coeficientes-1);
		}
		if (vector [0]==1)
		{
		printf("x^%i", coeficientes-1);
		}
		if (vector [0]==-1)
		{
		printf("-x^%i", coeficientes-1);
		}
		for (i=1; i<(coeficientes-2); i++)
		{
			if (vector [i]==1)
			{
				printf(" +x^%i", coeficientes-i-1);
			}
			if (vector [i]==-1)
			{
				printf(" -x^%i", coeficientes-i-1);
			}
			if (vector [i]>1)
			{
				printf(" +%ix^%i", vector [i], coeficientes-i-1);
			}
			if (vector [i]<-1)
			{
				printf(" %ix^%i", vector [i], coeficientes-i-1);
			}
		}
		if (vector [coeficientes-2]!=1 && vector [coeficientes-2]!=-1)
		{		
		printf("%ix", vector [coeficientes-2]);
		}
		if (vector [coeficientes-2]==1)
		{		
		printf(" +x");
		}
		if (vector [coeficientes-2]==-1)
		{		
		printf(" -x");
		}
		if (vector [coeficientes-1]>0)
		{
			printf(" +%i", vector [coeficientes-1]);
		}
		if (vector [coeficientes-1]<0)
		{
			printf(" %i", vector [coeficientes-1]);
		}
	}
}

float evaluar_polinomio (int coeficientes, int vector [], float punto)
{
	int i;
	float resultado=0;

	for (i=0; i<coeficientes; i++)
	{
		resultado = resultado + vector [i]* pow (punto, coeficientes-i-1);
	}
	return (resultado);
}

int main ()
{
	int coeficientes, vector [DIM_VECTOR];
	float punto, resultado;

	printf("\n¿Cuántos coeficientes tiene su polinomio?\n");
	scanf("%i", &coeficientes);
	while ((coeficientes<1) || (coeficientes>DIM_VECTOR))
	{
		printf("\nEl número de coeficientes del polinomio introducido no es válido. Deberá ser un número entre 1 y 100, introduzca de nuevo el número de coeficientes: ");
		scanf("%i", &coeficientes);
	}
	leer_polinomio (coeficientes, vector);
	mostrar_polinomio (coeficientes, vector);
	printf("\n\n¿En qué punto desea evaluar el polinomio? ");
	scanf("%f", &punto);
	resultado = evaluar_polinomio (coeficientes, vector, punto);
	printf ("\nEl resultado en el punto x = %f, es igual a %f.\n\n", punto, resultado);
	return (0);
}
