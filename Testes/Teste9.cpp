#include<stdio.h>
#include<stdlib.h>
main()
{
	float a,b,c,d,media;
	printf("\nDigite a primeira nota\n");
	scanf("%f",&a);
	printf("\nDigite a segunda nota\n");
	scanf("%f",&b);
	printf("\nDigite a terceira nota\n");
	scanf("%f",&c);
	printf("\nDigite a quarta nota\n");
	scanf("%f",&d);
	media=(a+b+c+d)/4;
	printf("\nA media do aluno e %.1f\n",media);
	system("pause");
}
