#include <stdio.h>
#include <stdlib.h>
main()
{
	int sex,cm=0,ch=0,cs=0,cn=0,crsm=0,crnh=0,res,cg;float ph,pm;
	for(cg=1;cg<=20;cg++)
	{
		printf("Informe seu sexo\n1-Feminino\n2-Masculino\n");scanf("%d",&sex);
		printf("Voce gostaria de um novo produto no mercado?\n1-Sim\n2-Nao\n");scanf("%d",&res);
		if(sex==1)
		{
			cm++;
			if(res==1)
			{
			crsm++;
			}
		}
		if(sex==2)
		{
			ch++;
			if(res==2)
			{
			crnh++;
			}
		}
		if(res==1)
		{
			cs++;
		}
		if(res==2)
		{
			cn++;
		}
	}
	printf("O numero de pessoas que responderam sim foi\n%d\n",cs);
	printf("O numero de pessoas que responderam nao foi\n%d\n",cn);
	pm=crsm*100/cm;
	printf("A porcentagem de mulheres que responderam sim foi\n%.2f%%\n",pm);
	ph=crnh*100/ch;
	printf("A porcentagem de homens que responderam nao foi\n%.2f%%\n",ph);
	system("Pause");
}
