#include<stdio.h>
#include<stdlib.h>
main()
{
	int sex=1,ch=0,cm=0;
	float alt,pes,ach,acm,mpeh,mpem;
	while(sex!=0)
	{
		printf("Informe seu sexo\n1-Masculino\n2-Feminino\n0-Resultado\n");scanf("%d",&sex);
		
		if(sex!=0)
		{
		printf("Informe sua altura\n");scanf("%f",&alt);
		printf("Informe seu peso\n");scanf("%f",&pes);	
		}	
		if(sex==1)
		{
			ach=ach+pes;
			ch=ch+1;
			ach++;
		}
		else if(sex==2)
		{
			acm=acm+pes;
			cm=cm+1;
			acm++;
		}
		else{
			printf("\nResultado:\n\n");
		}
	}
	mpeh=ach/ch;
	mpem=acm/cm;
	printf("O numero de homens e:\n%d\n",ch);
	printf("O numero de mulheres e:\n%d\n",cm);
	printf("A media de peso das mulheres e:\n%.1f\n",mpem);
	printf("A media de peso dos homens e:\n%.1f\n",mpeh);
	system("pause");
}
