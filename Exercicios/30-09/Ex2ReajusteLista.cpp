#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	int c; float s, sr=0;
	printf("Digite o seu salário\n");
	scanf("%f",&s);
	printf("\nDigite o numero de identificação do seu cargo\n1-Office_Boy\n2-Secretaria\n3-Aux.Adm\n4-Gerente\n\n");scanf("%d",&c);
	if(c==1)
	{
		sr=s*1.25;
		printf("\nSeu salário é de:\n%.1f\n",sr);
	}
	else if(c==2)
	{
		sr=s*1.20;
		printf("\nSeu salário é de:\n%.1f\n",sr);
	}
		else if(c==3)
	{
		sr=s*1.15;
		printf("\nSeu salário é de:\n%.1f\n",sr);
	}
		else if(c==4)
	{
		sr=s*1.10;
		printf("\nSeu salário é de:\n%.1f\n",sr);
	}
	else {
		printf("\nCargo não disponivel para aumento!");
	}
}
