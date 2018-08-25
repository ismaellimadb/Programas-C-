#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	int n; float r;
	printf("\nDigite um numero inteiro\n");
	scanf("%d",&n);
	r=sqrt(n);
	printf("\nA raiz quadrada desse numero e:\n%.1f\n\n",r);
	system("pause");
}
