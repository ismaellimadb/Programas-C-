#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	float a,b,r,z,x;
	printf("\nEscreva dois numeros\n");
	scanf("%f %f",&a,&b);
	r=sqrt(a);
	z=sqrt(b);
	x=r+z;
	printf("\nA raiz quadrada do primeiro numero e:\n%1.f\n",r);
	printf("\nA raiz quadrada do segundo numero e:\n%1.f\n",z);
	printf("\nO resultado da soma das duas raizes e:\n%1.f\n\n",x);
	system("pause");
}
