#include <stdio.h>

int main ()
{
	int iva;
	double precio, anterior, posterior;
	
	printf("\nIntroduce el precio del producto: ");
	scanf("%lf", &precio);
	printf("\nIntroduce el tipo de interés aplicado al producto:");
	printf("\n1. General.");
	printf("\n2. Reducido.");
	printf("\n3. Reducido que pasa a General.");
	printf("\n4. Superreducido que pasa a General.");
	printf("\n5. Tipo Superreducido.\n\n");
	scanf("%i", &iva);

	switch (iva)
	{
		case 1:
		{
			anterior = precio + (precio*18/100);
			posterior = precio + (precio*21/100);
			break;
		}
		case 2:
		{
			anterior = precio + (precio*8/100);
			posterior = precio + (precio*10/100);
			break;
		}
		case 3:
		{
			anterior = precio + (precio*8/100);
			posterior = precio + (precio*21/100);
			break;
		}
		case 4:
		{
			anterior = precio + (precio*4/100);
			posterior = precio + (precio*21/100);
			break;
		}
		case 5:
		{
			anterior = precio;
			posterior = precio;
			break;
		}
	}
	printf("\nEl precio anterior a la subida del IVA hubiera sido %.2lf unidades monetarias.\n\n", anterior);
	printf("\nEl precio posterior a la subida del IVA es %.2lf unidades monetarias.\n\n", posterior);
	return(0);
}
