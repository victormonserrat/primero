#include <stdio.h>

int main ()
{
	int n;
	
	for (n=1; n<=100; n = n+10)
	{
		printf("\n%5i %5i %5i %5i %5i %5i %5i %5i %5i %5i", n, n+1, n+2, n+3, n+4, n+5, n+6, n+7, n+8, n+9);
	}
	printf("\n\n");
	return(0);
}
