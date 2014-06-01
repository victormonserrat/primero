/* calculadora polaca inversa */

/* pide ingreso de expresiones en notaci�n polaca inversa hasta
   obtener un caracter EOF (fin de archivo, Ctrl-D).
   Ejemplo de notaci�n polaca:
      la expresi�n
	 (10 - 8) * (4 + 5)
      se escribe
	 10 8 - 4 5 + *
*/

#include <stdio.h>
#include <stdlib.h>	/* para atof() */
#include "calc.h"

#define MAXOP 100       /* m�xima cantidad operandos y operadores */
#define NUMERO '0'	/* se�al para detecci�n de n�mero */

int getop(char[]);
void push(double);
double pop(void);

/* programa principal */
main()
{
  int tipo;
  double op2;
  char s[MAXOP];

  printf("\nCALCULADORA POLACA.\n");
  printf("Ingrese expresiones en notaci�n polaca inversa.\n");
  printf("Para finalizar, digite Ctrl-D.\n");

  while((tipo = getop(s)) != EOF) {
    switch (tipo) {
    case NUMERO:
      push(atof(s));
      break;
    case '+':
      push(pop() + pop());
      break;
    case '*':
      push(pop() * pop());
      break;
    case '-':
      op2 = pop();            /* extrae el sustraendo */
      push(pop() - op2);      /* extrae el minuendo y resta */
      break;
    case '/':
      op2 = pop();            /* extrae el divisor */
      if (op2 != 0.0)
	push(pop() / op2);    /* extrae el dividendo y divide */
      else
	printf("ERROR: divisor nulo\n");
      break;
    case '\n':
      printf("Resultado:\t%.8g\n", pop());
      break;
    default:
      printf("ERROR: comando desconocido %s\n", s);
      break;
    }
  }
  return 0;
}

