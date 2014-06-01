#include <stdio.h>

int main()
{
	char a= 'A', b= '9', c='$';
	int i= 5;
	float f= 2.5;

	printf("%c %c%% %c", a, b,c);
	printf("%4c %5c %6c", a,b,c);
	printf("\n%d %d %d", a,b,c);
	printf("%c%c\t “%c\”\n", a,b,c);
	printf("a=%c; b=%-3c, c=%8c", a,b,c);
	printf("%d %f \n %f %d", i,i,f,f);
	printf("El valor es: %f", (3*f)/3*i);
	printf("El valor de f con cuatro decimales: %.4f", f);
	printf("caracteres especiales:\’comillas simples\’\n\”comillas dobles\”");
	printf("Escribiendo caracteres especiales: Barra inclinada \\!!!");

	return(0);
}
