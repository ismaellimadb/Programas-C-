#include <stdio.h>
#include <stdlib.h>
#define MEDIA_PARA_PASSAR_DE_ANO 6.0
#define NUMERO_PROVAS 2
main()
{
	float a,b,r;
	printf("\nDigite duas notas\n");
	scanf("%f %f",&a,&b);
	r=(a+b)/2;
	printf("\nO numero de provas e:\n%d\n",NUMERO_PROVAS);
	printf("\nA media para passar de ano e:\n%.1f\n",MEDIA_PARA_PASSAR_DE_ANO);
	printf("\nA nota do Aluno e:\n%.1f\n\n",r);
	system("pause");
}
