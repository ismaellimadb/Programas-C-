#include <stdio.h>
#include <stdlib.h>
main()
{
	float a,b,c,d,media;
	printf("Digite as quatro notas do aluno\n");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	media=(a+b+c+d)/4;
	if(media>=6)
	{
	printf("O aluno esta aprovado\n");
	}
	else
	{
	printf("O aluno esta reprovado\n");
	}
	system("pause");
}
