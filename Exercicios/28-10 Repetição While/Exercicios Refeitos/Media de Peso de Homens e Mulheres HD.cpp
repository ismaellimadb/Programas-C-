#include <stdio.h>
#include <stdlib.h>
main()
{
	int sex=1,ch=0,cm=0;
	float pes,alt,ach,acm,medio,media;
	while(sex!=0)
	{
		printf("Informe seu sexo:\n1-Masculino\n2-Feminino\n0-Resultado\n");scanf("%d",&sex);
		if(sex!=0)
		{
			printf("Informe sua altura\n"); scanf("%f",&alt);
			printf("Informe seu peso\n");scanf("%f",&pes);
		}
		if(sex==1)
		{
			ach=ach+pes;
			ch=ch+1;
			ach++;
		}
		if(sex==2)
	{
		acm=acm+pes;
		cm=cm+1;
		acm++;
	}
	else{
		printf("Resultado:\n\n");
	}
	}
	medio=ach/ch;
	media=acm/cm;
	printf("A quantidade de homens e:\n%d\n",ch);
	printf("A quantidade de mulheres e:\n%d\n",cm);
	printf("A media de peso dos homens e:\n%.1f\n",medio);
	printf("A media de peso das mulheres e:\n%.1f\n",media);
}
