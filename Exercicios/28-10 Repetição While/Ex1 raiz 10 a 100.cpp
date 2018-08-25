#include <stdio.h>
#include <math.h>
main()
{
	int c=10;float sr;
	while (c<=100)
	{
		sr=sqrt(c);
		printf("A raiz de %d e %.2f\n",c,sr);
		c++;
	}
}

