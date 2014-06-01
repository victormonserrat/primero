#include <stdio.h>
#include <math.h>

int main ()
{
	unsigned int s;
	float i=1, sumatorio=0;

	printf("\nIntroduce el índice superior del sumatorio: ");
	scanf("%i", &s);

	while (i<=s)
	{
	sumatorio = sumatorio - (pow(1,i))*(1/(pow(i,2)));
	i = i+1;
	}
	printf("\nEl valor del sumatorio es %f.\n\n", sumatorio);
	return (0);
}
