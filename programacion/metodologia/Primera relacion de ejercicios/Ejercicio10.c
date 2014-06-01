#include <stdio.h>
#include <string.h>
#define DIM_CHAR 100

void replace (char *s, char nuevo, char viejo)
{
	int i;
	char *p;

	p = strchr (s, viejo);
	while (p != NULL)
	{
		*p = nuevo;
		p = strchr (s, viejo);
	}
}

int main ()
{
	char s [DIM_CHAR], nuevo, viejo;

	printf ("\nIntroduzca una cadena: ");
	fgets (s, DIM_CHAR, stdin);
	s [strlen (s) -1] = '\0';
	printf ("\nIntroduzca el carácter que quiere modificar: ");
	scanf ("%c", &viejo);
	getchar ();
	printf ("\nIntroduzca el carácter por el que lo quiere sustituir: ");
	scanf ("%c", &nuevo);
	getchar ();
	replace (s, nuevo, viejo);
	printf ("\nLa cadena modificada es \"%s\".\n\n", s);
	return (0);
}
