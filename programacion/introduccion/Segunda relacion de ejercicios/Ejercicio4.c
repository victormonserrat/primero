#include <stdio.h>

int main()
{
int year;
	printf("\nIndique el año que desea conocer si es o no bisiesto: ");
	scanf("%i", &year);
	if ((year%4)==0)
	{
		if (((year%100)==0) && ((year%400)!=0))
		{
		printf("\nEl año introducido (%i), NO es bisiesto.\n\n", year);
		}
		else
		{
		printf("\nEl año introducido (%i), es bisiesto.\n\n", year);
		}
	}
	else
	{
	printf("\nEl año introducido (%i), NO es bisiesto.\n\n", year);
	}

return(0);
}
