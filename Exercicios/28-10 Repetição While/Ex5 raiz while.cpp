#include <stdio.h>
#include <math.h>
main()
{
int val,exit; float result;
printf("Digite o valor desejado\n");scanf("%d",&val);
while(val!=0){
	result=sqrt(val);
	printf("A raiz do numero fornecido e de %.1f",result);
	val++;
	printf("\nInforme um novo numero ou digite 0 para sair\n");
	scanf("%d",&exit);
	val=exit;
}
}
