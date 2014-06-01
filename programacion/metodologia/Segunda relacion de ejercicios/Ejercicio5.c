#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define DIM_CHAR 160

char* concatenar (char *cadResult, char *concatenar)
{
	int i;

	cadResult [strlen(cadResult)] = ' ';
	for (i=0; i<=strlen(concatenar); i++)
	{
		cadResult [strlen (cadResult) +i+1] = concatenar [i];
	}
	return (cadResult);
}

int main ()
{
	char *frase, *p, *cadResult;
	char **vector;
	int size=0, i, nEle=0;

	vector=(char**)malloc(sizeof(char*));
	frase=(char*)malloc(DIM_CHAR*sizeof(char));
	do
	{
	printf("\nIntroduzca una frase: ");
	fgets(frase, DIM_CHAR, stdin);
	frase [strlen(frase)-1] = '\0';
	size=(strlen(frase));
	vector=(char**)realloc(vector, (nEle+1)*sizeof(char*));
	vector [nEle]=(char*)malloc((size+1)*sizeof(char));
	for (i=0; i<size; i++)
	{
		vector [nEle][i] = frase [i];
	}
	p=strchr (frase, '$');
	nEle++;
	}
	while (p==NULL);
	p=strchr (vector[nEle-1], '$');
	for (i=(p-vector [nEle-1]); i<size; i++)
	{
		vector [nEle-1][i] = '\0';
	}
	vector [nEle-1]=(char*)realloc(vector[nEle-1], (p-vector [nEle-1])*sizeof(char));
	printf("\nLas frases son:\n");
	for (i=0; i<nEle; i++)
	{
		printf("\n%s", vector [i]);
	}
	cadResult = (char*)malloc(((strlen(vector [1])+1))*sizeof(char));
	cadResult = vector [1];
	for (i=3; i<nEle; i = i+2)
	{
		cadResult = (char*)realloc(cadResult, ((strlen (cadResult))+(strlen (vector [i]))+1)*sizeof(char));
		cadResult = concatenar (cadResult, vector [i]);
	}
	printf("\n\nLas frases impares concatenadas son:\n\n%s\n\n", cadResult);
	for (i=0; i<nEle; i++)
	{
		free (vector [i]);
	}
	free (vector);
	return (0);
}
