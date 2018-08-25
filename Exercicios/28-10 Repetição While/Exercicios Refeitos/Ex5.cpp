#include <stdio.h>
#include <math.h>
main()
{
	int n,exit;float r;
	printf("Informe um numero\n");scanf("%d",&n);
	while(n!=0)
	{
		r=sqrt(n);
		printf("A raiz do numero informado e:\n%.1f\n",r);
		n++;
		printf("Informe outro numero ou digite 0 para sair\n");scanf("%d",&exit);
		n=exit;
	}
}
