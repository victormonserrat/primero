#include <stdio.h>

int primo (int n)
{
	int i, aux;

	for (i=2; i<n; i++)
	{
		if (n%i==0)
		{
			aux = 1;
			return (aux);
		}
		else
		{
			aux = 0;
		}
	}
	return (aux);
}

int main ()
{
	int n, i, aux;

	printf("\nIntroduce un número para descomponerlo en factores primos: ");
	scanf("%i", &n);
	printf("\nNúmero	|	Factores primos");
	printf("\n	|");
	aux = primo (n);
	i=2;
	while (aux!=0)
	{
		if (n%i==0)
			{
				n=n/i;
				printf("\n%i	|	%i", n*i, i);
				i= i-1;
			}
		aux = primo (n);
		i = i+1;
	}
	printf("\n%i	|	%i", n, n);
	printf("\n1	|\n\n");	
	return (0);
}
