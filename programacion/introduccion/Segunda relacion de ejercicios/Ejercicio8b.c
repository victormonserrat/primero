#include <stdio.h>

int main ()
{
	int n=1;
	
	do
	{
		printf("\n%5i %5i %5i %5i %5i %5i %5i %5i %5i %5i", n, n+1, n+2, n+3, n+4, n+5, n+6, n+7, n+8, n+9);
		n = n+10;
	}
	while (n<=100);

	printf("\n\n");
	return(0);
}
