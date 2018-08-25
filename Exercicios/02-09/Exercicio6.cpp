#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	int ano;
	printf("\n Escreva o ano \n ");
	scanf("%d",&ano);
	if(ano%4==0||ano%400==0){
	printf("\n O ano %d é bissexto \n ",ano);
	}
	else{
	printf("\n O ano %d não é bissexto \n", ano);
	}
}
