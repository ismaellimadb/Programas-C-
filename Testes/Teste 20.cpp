#include <stdio.h>
#include <math.h>
main()
{
	float raiz; int cont=10;
	while(cont<=100)
	{
		raiz=sqrt(cont);
		printf("A raiz de %d e %.2f\n",cont,raiz);
		cont++;
	}
}
