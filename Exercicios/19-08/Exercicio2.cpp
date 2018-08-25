#include<stdio.h>
#include<stdlib.h>
main()
{
	int a,b,soma,sub,mult,div;
	printf("\nDigite o primeiro valor de um numero inteiro\n");
	scanf("%d",&a);
	printf("\nDigite o segundo valor\n");
	scanf("%d",&b);
	soma=a+b;
	sub=a-b;
	mult=a*b;
	div=a/b;
	printf("\nSoma: %d",soma);
	printf("\nSubtracao: %d",sub);
	printf("\nMultiplicacao: %d",mult);
	printf("\nDivisao: %d\n",div);
	system("pause");
}
