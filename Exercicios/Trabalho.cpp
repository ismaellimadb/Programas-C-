#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	float n1,n2,n3,menor,media,falta,dias,limite;
	printf("Escreva três notas: ");
	scanf("%f %f %f",&n1,&n2,&n3);
	menor=n1;
	if(menor>n2){
		menor=n2;
	}
	else if (menor>n3)
	menor=n3;

 media = (n1+n2+n3-menor)/2;

	printf("Escreva a quantidade de faltas: ");scanf("%f",&falta);
	printf("Escreva os dias letivos: ");scanf("%f",&dias);
	limite=dias*0.25;
	
	if( media>=6&&falta<=limite)
	{
		printf("Aprovado com media: %.1f\n\n",media);
	}
	else if(media<=6&&falta>limite)
	{
		printf("Reprovado por faltas e com media: %.1f\n\n",media);
	}
	else if(falta>limite && media>=6) 
	{
		printf("Reprovado por faltas! com media: %.1f\n\n",media);
	}
	else 
	{
		printf("Reprovado por notas! com media: %.1f\n\n",media);
	}
	system("pause");
}
