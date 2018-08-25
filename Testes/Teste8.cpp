#include <stdio.h>
#include <stdlib.h>
main()
{
	float a,b,media;
	printf("\nDigite a primeira nota\n");
	scanf("%f",&a);
	printf("\nDigite a segunda nota\n");
	scanf("%f",&b);
	media=(a+b)/2;
	printf("\nA media do aluno e: %.1f\n",media);
	system("pause");
}
