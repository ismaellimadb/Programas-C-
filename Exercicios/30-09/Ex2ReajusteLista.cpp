#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	int c; float s, sr=0;
	printf("Digite o seu sal�rio\n");
	scanf("%f",&s);
	printf("\nDigite o numero de identifica��o do seu cargo\n1-Office_Boy\n2-Secretaria\n3-Aux.Adm\n4-Gerente\n\n");scanf("%d",&c);
	if(c==1)
	{
		sr=s*1.25;
		printf("\nSeu sal�rio � de:\n%.1f\n",sr);
	}
	else if(c==2)
	{
		sr=s*1.20;
		printf("\nSeu sal�rio � de:\n%.1f\n",sr);
	}
		else if(c==3)
	{
		sr=s*1.15;
		printf("\nSeu sal�rio � de:\n%.1f\n",sr);
	}
		else if(c==4)
	{
		sr=s*1.10;
		printf("\nSeu sal�rio � de:\n%.1f\n",sr);
	}
	else {
		printf("\nCargo n�o disponivel para aumento!");
	}
}
