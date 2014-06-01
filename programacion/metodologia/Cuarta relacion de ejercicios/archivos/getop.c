/* calculadora polaca inversa: getop.c */

#include <stdio.h>
#include <ctype.h>
#include "calc.h"

int getch(void);
void ungetch(int);

/* getop: obtiene el siguiente operador u operando num�rico */

int getop(char s[])
{
  int i, c;

  while ((s[0] = c = getch()) == ' ' || c == '\t')
    ;			/* proposici�n vac�a */

  s[1] = '\0';
  if (!isdigit(c) && c != '.')
    return c;		/* no es un n�mero */
  i = 0;
  if (isdigit(c))	/* re�ne la parte entera */
    while(isdigit(s[++i] = c = getch()))
      ;			/* proposici�n vac�a */
  if (c == '.')		/* re�ne la parte fraccionaria */
    while (isdigit(s[++i] = c = getch()))
      ;			/* proposici�n vac�a */
  s[i] = '\0';
  if (c != EOF)
    ungetch(c);
  return NUMERO;
}

