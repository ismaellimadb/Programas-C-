#include <stdio.h>
#include <stdlib.h>
main()
{
	int contador=0, numero=1, acumulador=0;
	float media;
	do{
		printf("Digite um numero\n");scanf("%d",&numero);
		

	if(numero!=0&&numero%2==0)
	{
		acumulador=acumulador+numero;
		contador++;
	}
	else if(numero%2!=0)
	{
		printf("Vai ser descartado na contagem final\n");
	}
	else{
		printf("Nao houve numero par\n");
		}
}
	while(numero!=0);	
	media=acumulador/contador;

	printf("A media de pares e: %.1f\n",media);	
	system("pause");
}

