//Utilidad del programa:
/*
Calcula la nota final en la asignatura de Introducción a la Programación.
*/

//Inclusión de librerias:
#include <stdio.h>

//Definición de constantes:

//Declaración de variables:
int main()
{
	float practico, teorico, micros, participacion, cuestionarios, nota;

	//Pedida y entrada de datos:
	printf("\nIntroduzca su nota obtenida en el examen práctico: ");
	scanf("%f", &practico);
	printf("\nIntroduzca su nota obtenida en el examen teórico: ");
	scanf("%f", &teorico);
	printf("\nIntroduzca su nota media obtenida en las pruebas de micros: ");
	scanf("%f", &micros);
	printf("\nIntroduzca su nota de participación: ");
	scanf("%f", &participacion);
	printf("\nIntroduzca su nota media obetenida en los cuestionarios: ");
	scanf("%f", &cuestionarios);

	//Cálculos:
	if (teorico < cuestionarios)
	{
		teorico = cuestionarios;
	}
	if (teorico < 5)
	{
		teorico = 0;
	}
	if (practico < 5)
	{
		practico = 0;
	}
	nota = (0.5*practico) + (0.2*teorico) + (0.15*micros) + (0.1*participacion) + (0.05*cuestionarios);
	
	//Salida de datos:
	printf("\nSu nota final es: %.2f\n\n", nota);
	
return(0);
}

