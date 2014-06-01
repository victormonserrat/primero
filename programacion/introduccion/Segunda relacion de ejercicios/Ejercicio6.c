#include <stdio.h>

int main()
{
	int mes, bisiesto;
	printf("\n\nIntroduzca el número del mes del que quiere conocer su número de días: ");
	scanf("%i", mes);

	switch(mes)
	case 1:
	{
		printf("\n\nEnero tiene 31 días.\n\n");
	break;
	}
	case 2:
	{
		printf("\n\nIntroduzca un 1 si se trata de un año bisiesto, si no es así introduzca cualquier número: ");
		scanf("%i", bisiesto);
		switch(bisiesto)
		case 1:
		{
			printf("\n\nFebrero tiene 29 días en los años bisiestos.\n\n");
		break;
		}
		default:
		{
			printf("\n\nFebrero tiene 28 días en los años NO bisiestos.\n\n");
		break;
		}
	break;
	}
	case 3:
	{
		printf("\n\nMarzo tiene 31 días.\n\n");
	break;
	}
	case 4:
	{
		printf("\n\nAbril tiene 30 días.\n\n");
	break;
	}
	case 5:
	{
		printf("\n\nMayo tiene 31 días.\n\n");
	break;
	}
	case 6:
	{
		printf("\n\nJunio tiene 30 días.\n\n");
	break;
	}
	case 7:
	{
		printf("\n\nJulio tiene 31 días.\n\n");
	break;
	}
	case 8:
	{
		printf("\n\nAgosto tiene 31 días.\n\n");
	break;
	}
	case 9:
		printf("\n\nSeptiembre tiene 30 días.\n\n");
	break;
	}
	case 10:
	{
		printf("\n\nOctubre tiene 31 días.\n\n");
	break;
	}
	case 11:
	{
		printf("\n\nNoviembre tiene 30 días.\n\n");
	break;
	}
	case 12:
	{
		printf("\n\nDiciembre tiene 31 días.\n\n");
	break;
	}
	default:
	{
		printf("\n\nEl número introducido no corresponde con ningún mes. El número debe estar comprendido entre 1 y 12. Es posible que se haya equivocado al escribirlo.\n\n");
	}
return(0);
}
