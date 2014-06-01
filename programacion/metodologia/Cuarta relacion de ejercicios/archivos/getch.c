/* calculadora polaca inversa: getch.c */

/* para reunir los caracteres que forman un n�mero se leen d�gitos
   hasta el punto decimal o caracter no num�rico, pero entonces ya
   se ha le�do un caracter de m�s.
   getch() lee un caracter,
   ungetch() lo devuelve a la entrada para ser rele�do.         */

#include <stdio.h>
#define BUFFER 100		/* largo del arreglo para buffer */

static char buf[BUFFER];	/* buffer de caracteres */
static int pbuf = 0;		/* posici�n en el buffer */

/* getch: obtiene un caracter, acaso devuelto al buffer */
int getch(void)
{
  if (pbuf > 0)			/* si el buffer no est� vac�o...    */
    return buf[--pbuf]; 	/* devuelve caracter del buffer.    */
   else				/* si el buffer est� vac�o...       */
    return getchar();		/* lee nuevo caracter de la entrada */
}

/* ungetch: devuelve caracter a la entrada */
void ungetch(int c)
{
  if (pbuf >= BUFFER)
    printf("ungetch: demasiados caracteres, se agot� el buffer\n");
  else
    buf[pbuf++] = c;
}

