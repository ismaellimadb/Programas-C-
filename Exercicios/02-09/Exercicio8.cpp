#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float n1,n2,n3,n4,dl,media,f,limite;
	printf("Escreva as quatro notas do aluno\n");
	scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
	printf("\nEscreva os dias letivos\n");
	scanf("%f",&dl);
	printf("\nEscreva o numero de faltas do aluno\n");
	scanf("%f",&f);
	media=(n1+n2+n3+n4)/4;
	limite=(dl*0.25);
	if(media>=6&&f<limite){
		printf("\nAprovado\n");
		printf("\nMédia: %.1f",media);
		printf("\nO aluno teve %.0f faltas\n",f);
	}
	else
	{
		printf("\nReprovado\n");
		printf("\nMedia: %.1f",media);
		printf("\nO aluno teve %.0f faltas\n",f);
	}
}
