#include <stdio.h>
#include <stdlib.h>
#include <time.h>

srand(time(NULL));

numero = rand () % 33;

---------------------

formula general = rand () % (intervalo) + (numero inicial)

Ejemplo: [-6,6]

rand () % 13 + (-6);
