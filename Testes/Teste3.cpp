#include<stdio.h>
#include<stdlib.h>

main ()
{
	float a,b,soma;
	printf("\nEntre com 2 numeros\n");
	scanf("%f %f",&a,&b);
	soma=a+b;
	printf("\n%.2f + %.2f= %.2f\n",a,b,soma);
	system("pause");
}
