/*
1. Cuestiones sobre punteros y matrices dinámicas.

Supón una matriz dinámica (float ** tabla) de 2x3 elementos, con los siguientes valores.

{ {1.1, 1.2, 1.3}, {2.1.,2.2, 2.3}}

a) ¿Cual es el significado de tabla? Es un puntero doble que apunta al primer elemento [0][0] de la matriz.
b) ¿Cual es el significado de (tabla+1)? Es un puntero doble que apunta al elemento [1][0] de la matriz.
c) ¿Cual es el significado de *(tabla+1)? Elemento [1][0].
d) ¿Cual es el significado de (*(tabla+1)+1)? Elemento [1][1] de la matriz.
e) ¿Cual es el significado de (*(tabla)+1)? Elemento [0][1] de la matriz.
f) ¿Cual es el valor de *(*(tabla+1)+1)? 2.2
g) ¿Cual es el valor de *(*(tabla)+1)? 1.2
h) ¿Cual es el valor de *(*(tabla+1))? 2.1
*/

#include <stdio.h>
#include <stdlib.h>
#define DIM 100

 
int main ()
{
	float **tabla;
 	int i, j, nFil=2, nCol=3;
 
	tabla = (float**) malloc (nFil*sizeof (float*));
	tabla [0] = (float*) malloc (nFil*nCol*sizeof (float));
 
	for (i = 1 ; i < nFil ; i ++)
	{
			tabla [i] = tabla [i-1] + nCol;
	}

	tabla [0][0] = 1.1;
	tabla [0][1] = 1.2;
	tabla [0][2] = 1.3;
	tabla [1][0] = 2.1;
	tabla [1][1] = 2.2;
	tabla [1][2] = 2.3;

    printf ("\nf) El valor de '*(*(tabla + 1)) + 1' es %.1f.\n", *(*(tabla + 1) + 1));
    printf ("\ng) El valor de '*(*(tabla) + 1)' es %.1f.\n", *(*(tabla) + 1));
    printf ("\nh) El valor de '*(*(tabla + 1))' es %.1f.\n\n", *(*(tabla + 1)));
}
