#include <stdio.h>
#include <math.h>
main()
{
	int num,exit;float raiz;
	printf("Informe um numero inteiro\n");scanf("%d",&num);
	while(num!=0)
	{
		raiz=sqrt(num);
		printf("A raiz do numero informado e: \n%.2f\n",raiz);
		num++;
		printf("Informe outro valor ou digite 0 para sair\n");scanf("%d",&exit);
		num=exit;
	}
}
