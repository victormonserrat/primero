/*
ANÁLISIS:
	Entradas:
		radio:float, lectura por teclado.
	Salidas:
		longitud: float.
	Valores constantes:
		pi: constante= 3.14.

CÓMO SE OBTIENE EL RESULTADO:
	longitud=2*PI*radio.

EJEMPLO:

DISEÑO:
	Inicio
		Leer(radio)
		longitud= 2*PI*radio
		Escribir(longitud)
	Fin
*/

#include <stdio.h>
#include <math.h>
int main ()
{
	float radio, longitud;
	printf("\nIntroduzca el radio de la circunferencia: ");
	scanf("%f", &radio);
	longitud=2*M_PI*radio;
	printf("\nLa longitud de la circunferencia es: %f \n\n", longitud);

return(0);
}
