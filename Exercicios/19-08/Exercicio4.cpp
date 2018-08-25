#include <stdio.h>
#include <stdlib.h>
main()
{
	int a,b,media;
	printf("\nDigite a primeira nota\n");
	scanf("%d",&a);
	printf("\nDigite a segunda nota\n");
	scanf("%d",&b);
	media=(a+b)/2;
	printf("\nA media do aluno e: \n%d\n\n",media);
	system("pause");
}
