#include <stdio.h>
#include <stdlib.h>
main()
{
	int sex=1,ch=0,cm=0;
	float peso,alt,mph,mpm,ach,acm;
	while(sex!=0)
	{
		printf("Informe seu sexo\n1-Masculino\n2-Feminino\n0-Resultado\n");scanf("%d",&sex);
		if(sex!=0)
		{
		printf("Informe sua altura\n");scanf("%f",&alt);
		printf("Infome seu peso\n");scanf("%f",&peso);
		}
		if(sex==1)
		{
			ach=ach+peso;
			ch=ch+1;
			ach++;
		}
		else if (sex==2)
		{
			acm=acm+peso;
			cm=cm+1;
			acm++;
		}
		else
		{
			printf("Resutado:\n\n");
		}
	}
	mph=ach/ch;
	mpm=acm/cm;
	printf("A quantidade de homens e:\n%d\n",ch);
	printf("A quantidade de mulheres e:\n%d\n",cm);
	printf("A media de peso dos homens e:\n%.1f\n",mph);
	printf("A media de peso das mulheres e:\n%.1f\n",mpm);
	system("pause");
}
