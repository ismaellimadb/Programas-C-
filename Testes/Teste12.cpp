#include <stdio.h>
#include <stdlib.h>
#define MEDIA_PARA_PASSAR_DE_ANO 6.0
#define NUMERO_AVALIACOES 3.0
main()
{
	float a,b,c,media;
	printf("\nDigite tres notas\n");
	scanf("%f %f %f",&a,&b,&c);
	media=(a+b+c)/3;
	printf("\n\nMedia para passar de ano:\n%1.f\n",MEDIA_PARA_PASSAR_DE_ANO);
	printf("\n\nNumero de Av:\n%1.f\n",NUMERO_AVALIACOES);
	printf("\n\nSua Media:\n%1.f\n\n\n",media);
	system("pause");
}
